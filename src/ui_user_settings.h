/********************************************************************************
** Form generated from reading UI file 'user_settings.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_SETTINGS_H
#define UI_USER_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_userSettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QGroupBox *sexGroup;
    QGridLayout *gridLayout_4;
    QRadioButton *maleSelection;
    QRadioButton *femaleSelection;
    QFrame *frame_4;
    QGridLayout *gridLayout_9;
    QGroupBox *unitsGroup;
    QGridLayout *gridLayout_10;
    QRadioButton *metricRadioButton;
    QRadioButton *imperialRadioButton;
    QDialogButtonBox *userSettingsButtonBox;
    QFrame *frame_3;
    QGridLayout *gridLayout_8;
    QPushButton *clearDataButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QGroupBox *dateCalculationGroup;
    QGridLayout *gridLayout;
    QLabel *weekdayStartLabel;
    QComboBox *weekdayStartInput;
    QRadioButton *fixedDateRadioButton;
    QRadioButton *rollingDateRadioButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QFrame *weeklyLimitFrame;
    QGridLayout *gridLayout_7;
    QGroupBox *weeklyLimitGroup;
    QGridLayout *gridLayout_6;
    QRadioButton *customLimitRadioButton;
    QRadioButton *niaaaStandardsRadioButton;
    QSpacerItem *verticalSpacer_3;
    QSpinBox *customLimitSpinBox;
    QLabel *customLimitLabel;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *userSettingsDialog)
    {
        if (userSettingsDialog->objectName().isEmpty())
            userSettingsDialog->setObjectName(QString::fromUtf8("userSettingsDialog"));
        userSettingsDialog->resize(830, 398);
        userSettingsDialog->setModal(true);
        gridLayout_2 = new QGridLayout(userSettingsDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(userSettingsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        sexGroup = new QGroupBox(frame);
        sexGroup->setObjectName(QString::fromUtf8("sexGroup"));
        sexGroup->setAlignment(Qt::AlignCenter);
        sexGroup->setFlat(true);
        gridLayout_4 = new QGridLayout(sexGroup);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        maleSelection = new QRadioButton(sexGroup);
        maleSelection->setObjectName(QString::fromUtf8("maleSelection"));
        maleSelection->setChecked(true);

        gridLayout_4->addWidget(maleSelection, 0, 0, 1, 1);

        femaleSelection = new QRadioButton(sexGroup);
        femaleSelection->setObjectName(QString::fromUtf8("femaleSelection"));

        gridLayout_4->addWidget(femaleSelection, 1, 0, 1, 1);


        gridLayout_5->addWidget(sexGroup, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        frame_4 = new QFrame(userSettingsDialog);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        unitsGroup = new QGroupBox(frame_4);
        unitsGroup->setObjectName(QString::fromUtf8("unitsGroup"));
        unitsGroup->setAlignment(Qt::AlignCenter);
        unitsGroup->setFlat(true);
        gridLayout_10 = new QGridLayout(unitsGroup);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        metricRadioButton = new QRadioButton(unitsGroup);
        metricRadioButton->setObjectName(QString::fromUtf8("metricRadioButton"));

        gridLayout_10->addWidget(metricRadioButton, 1, 0, 1, 1);

        imperialRadioButton = new QRadioButton(unitsGroup);
        imperialRadioButton->setObjectName(QString::fromUtf8("imperialRadioButton"));
        imperialRadioButton->setChecked(true);

        gridLayout_10->addWidget(imperialRadioButton, 0, 0, 1, 1);


        gridLayout_9->addWidget(unitsGroup, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_4, 1, 0, 1, 1);

        userSettingsButtonBox = new QDialogButtonBox(userSettingsDialog);
        userSettingsButtonBox->setObjectName(QString::fromUtf8("userSettingsButtonBox"));
        userSettingsButtonBox->setOrientation(Qt::Vertical);
        userSettingsButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(userSettingsButtonBox, 0, 5, 1, 1);

        frame_3 = new QFrame(userSettingsDialog);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        clearDataButton = new QPushButton(frame_3);
        clearDataButton->setObjectName(QString::fromUtf8("clearDataButton"));

        gridLayout_8->addWidget(clearDataButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(frame_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(userSettingsDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        dateCalculationGroup = new QGroupBox(frame_2);
        dateCalculationGroup->setObjectName(QString::fromUtf8("dateCalculationGroup"));
        dateCalculationGroup->setAlignment(Qt::AlignCenter);
        dateCalculationGroup->setFlat(true);
        gridLayout = new QGridLayout(dateCalculationGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        weekdayStartLabel = new QLabel(dateCalculationGroup);
        weekdayStartLabel->setObjectName(QString::fromUtf8("weekdayStartLabel"));

        gridLayout->addWidget(weekdayStartLabel, 4, 0, 1, 1);

        weekdayStartInput = new QComboBox(dateCalculationGroup);
        weekdayStartInput->addItem(QString());
        weekdayStartInput->addItem(QString());
        weekdayStartInput->addItem(QString());
        weekdayStartInput->addItem(QString());
        weekdayStartInput->addItem(QString());
        weekdayStartInput->addItem(QString());
        weekdayStartInput->addItem(QString());
        weekdayStartInput->setObjectName(QString::fromUtf8("weekdayStartInput"));

        gridLayout->addWidget(weekdayStartInput, 5, 0, 1, 1);

        fixedDateRadioButton = new QRadioButton(dateCalculationGroup);
        fixedDateRadioButton->setObjectName(QString::fromUtf8("fixedDateRadioButton"));

        gridLayout->addWidget(fixedDateRadioButton, 1, 0, 1, 1);

        rollingDateRadioButton = new QRadioButton(dateCalculationGroup);
        rollingDateRadioButton->setObjectName(QString::fromUtf8("rollingDateRadioButton"));
        rollingDateRadioButton->setChecked(true);

        gridLayout->addWidget(rollingDateRadioButton, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);


        gridLayout_3->addWidget(dateCalculationGroup, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        weeklyLimitFrame = new QFrame(userSettingsDialog);
        weeklyLimitFrame->setObjectName(QString::fromUtf8("weeklyLimitFrame"));
        weeklyLimitFrame->setFrameShape(QFrame::StyledPanel);
        weeklyLimitFrame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(weeklyLimitFrame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        weeklyLimitGroup = new QGroupBox(weeklyLimitFrame);
        weeklyLimitGroup->setObjectName(QString::fromUtf8("weeklyLimitGroup"));
        weeklyLimitGroup->setToolTipDuration(-1);
        weeklyLimitGroup->setAlignment(Qt::AlignCenter);
        weeklyLimitGroup->setFlat(true);
        gridLayout_6 = new QGridLayout(weeklyLimitGroup);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        customLimitRadioButton = new QRadioButton(weeklyLimitGroup);
        customLimitRadioButton->setObjectName(QString::fromUtf8("customLimitRadioButton"));

        gridLayout_6->addWidget(customLimitRadioButton, 2, 0, 1, 1);

        niaaaStandardsRadioButton = new QRadioButton(weeklyLimitGroup);
        niaaaStandardsRadioButton->setObjectName(QString::fromUtf8("niaaaStandardsRadioButton"));

        gridLayout_6->addWidget(niaaaStandardsRadioButton, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 6, 0, 1, 1);

        customLimitSpinBox = new QSpinBox(weeklyLimitGroup);
        customLimitSpinBox->setObjectName(QString::fromUtf8("customLimitSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customLimitSpinBox->sizePolicy().hasHeightForWidth());
        customLimitSpinBox->setSizePolicy(sizePolicy);
        customLimitSpinBox->setMinimumSize(QSize(0, 25));

        gridLayout_6->addWidget(customLimitSpinBox, 8, 0, 1, 1);

        customLimitLabel = new QLabel(weeklyLimitGroup);
        customLimitLabel->setObjectName(QString::fromUtf8("customLimitLabel"));

        gridLayout_6->addWidget(customLimitLabel, 7, 0, 1, 1);


        gridLayout_7->addWidget(weeklyLimitGroup, 0, 0, 1, 1);


        verticalLayout_5->addWidget(weeklyLimitFrame);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(verticalLayout_5);


        gridLayout_2->addLayout(horizontalLayout, 0, 3, 4, 1);


        retranslateUi(userSettingsDialog);
        QObject::connect(userSettingsButtonBox, &QDialogButtonBox::accepted, userSettingsDialog, &QDialog::accept);
        QObject::connect(userSettingsButtonBox, &QDialogButtonBox::rejected, userSettingsDialog, &QDialog::reject);

        QMetaObject::connectSlotsByName(userSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *userSettingsDialog)
    {
        userSettingsDialog->setWindowTitle(QCoreApplication::translate("userSettingsDialog", "User Settings", nullptr));
        sexGroup->setTitle(QCoreApplication::translate("userSettingsDialog", "Sex", nullptr));
        maleSelection->setText(QCoreApplication::translate("userSettingsDialog", "Male", nullptr));
        femaleSelection->setText(QCoreApplication::translate("userSettingsDialog", "Female", nullptr));
        unitsGroup->setTitle(QCoreApplication::translate("userSettingsDialog", "Units", nullptr));
        metricRadioButton->setText(QCoreApplication::translate("userSettingsDialog", "Metric (ml)", nullptr));
        imperialRadioButton->setText(QCoreApplication::translate("userSettingsDialog", "Imperial (oz)", nullptr));
        clearDataButton->setText(QCoreApplication::translate("userSettingsDialog", "Clear Data", nullptr));
        dateCalculationGroup->setTitle(QCoreApplication::translate("userSettingsDialog", "Date Calculation", nullptr));
        weekdayStartLabel->setText(QCoreApplication::translate("userSettingsDialog", "Reset stats on:", nullptr));
        weekdayStartInput->setItemText(0, QCoreApplication::translate("userSettingsDialog", "Sunday", nullptr));
        weekdayStartInput->setItemText(1, QCoreApplication::translate("userSettingsDialog", "Monday", nullptr));
        weekdayStartInput->setItemText(2, QCoreApplication::translate("userSettingsDialog", "Tuesday", nullptr));
        weekdayStartInput->setItemText(3, QCoreApplication::translate("userSettingsDialog", "Wednesday", nullptr));
        weekdayStartInput->setItemText(4, QCoreApplication::translate("userSettingsDialog", "Thursday", nullptr));
        weekdayStartInput->setItemText(5, QCoreApplication::translate("userSettingsDialog", "Friday", nullptr));
        weekdayStartInput->setItemText(6, QCoreApplication::translate("userSettingsDialog", "Saturday", nullptr));

        fixedDateRadioButton->setText(QCoreApplication::translate("userSettingsDialog", "Reset on day", nullptr));
        rollingDateRadioButton->setText(QCoreApplication::translate("userSettingsDialog", "Rolling", nullptr));
        weeklyLimitGroup->setTitle(QCoreApplication::translate("userSettingsDialog", "Weekly Limit Standard", nullptr));
        customLimitRadioButton->setText(QCoreApplication::translate("userSettingsDialog", "Custom", nullptr));
        niaaaStandardsRadioButton->setText(QCoreApplication::translate("userSettingsDialog", "CDC/NIAAA", nullptr));
        customLimitLabel->setText(QCoreApplication::translate("userSettingsDialog", "Custom Limit:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userSettingsDialog: public Ui_userSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_SETTINGS_H
