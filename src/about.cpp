//
// Created by Ross Wardrup on 9/16/20.
//

#include "about.h"
#include <QDir>
#include <CoreFoundation/CFBundle.h>

About::About(QWidget *parent) {
    /*
     * About app dialog
     */

    ui.setupUi(this);
    this->setFixedSize(237, 272);

    // Version text
    std::string version = "1.0.0-alpha";
    ui.versionLabel->setText(QString::fromStdString("Version " + version));

    // Make Qt URL clickable
    ui.acknowledgementsLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui.acknowledgementsLabel->setOpenExternalLinks(true);

    // Get path of .app file
    CFURLRef app_url_ref = CFBundleCopyBundleURL(CFBundleGetMainBundle());
    CFStringRef mac_path = CFURLCopyFileSystemPath(app_url_ref, kCFURLPOSIXPathStyle);
    QString icon_path_qstring = CFStringGetCStringPtr(mac_path, CFStringGetSystemEncoding());

    // Set path to icon
    std::string icon_path = icon_path_qstring.toStdString() + "/Contents/Resources/icon.icns";
    CFRelease(app_url_ref);
    CFRelease(mac_path);

    // Set icon
    QPixmap pixmap(QString::fromStdString(icon_path));
    ui.miniIcon->setPixmap(pixmap);
    ui.miniIcon->repaint();
}
