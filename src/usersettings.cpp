//
// Created by Ross Wardrup on 9/10/20.
//

#include "usersettings.h"

// LCOV_EXCL_START
UserSettings::UserSettings(QWidget *parent, const Options& options) {
    /*
     * Dialog box for user settings.
     * @param parent: parent widget.
     */

    ui.setupUi(this);
    this->setFixedSize(615, 195);

    if (options.sex == "male") {
        ui.maleSelection->setChecked(true);
    } else if (options.sex == "female") {
        ui.femaleSelection->setChecked(true);
    }

    if (options.weekly_limit != -1) {
        ui.customLimitSpinBox->setValue(options.weekly_limit);
    } else {
        ui.customLimitSpinBox->setValue(0);
    }

    if (options.limit_standard == "NIAAA") {
        ui.niaaaStandardsRadioButton->setChecked(true);
        ui.customLimitRadioButton->setChecked(false);
        ui.customLimitSpinBox->setEnabled(false);
    } else if (options.limit_standard == "Custom") {
        ui.niaaaStandardsRadioButton->setChecked(false);
        ui.customLimitRadioButton->setChecked(true);
        ui.customLimitSpinBox->setEnabled(true);
    }

    // Set weekday selector
    std::string current_date = options.weekday_start;
    if (!current_date.empty()) {
        ui.weekdayStartInput->setCurrentText(QString::fromStdString(current_date));
    } else {
        ui.weekdayStartInput->setCurrentText(QString::fromStdString("Sunday"));
    }

    // Set day of week calc
    if (options.date_calculation_method == "Fixed") {
        ui.weekdayStartInput->setEnabled(true);
        ui.fixedDateRadioButton->setChecked(true);
        ui.rollingDateRadioButton->setChecked(false);
    } else {
        ui.weekdayStartInput->setEnabled(false);
        ui.fixedDateRadioButton->setChecked(false);
        ui.rollingDateRadioButton->setChecked(true);
    }

    // Connections
    connect(ui.rollingDateRadioButton, &QRadioButton::clicked, this, &UserSettings::changed_date_calc);
    connect(ui.fixedDateRadioButton, &QRadioButton::clicked, this, &UserSettings::changed_date_calc);
    connect(ui.niaaaStandardsRadioButton, &QRadioButton::clicked, this, &UserSettings::changed_limit_setting);
    connect(ui.customLimitRadioButton, &QRadioButton::clicked, this, &UserSettings::changed_limit_setting);
}

std::string UserSettings::get_sex() {
    /*
     * Return state of radio buttons.
     */

    if (ui.maleSelection->isChecked()) {
        return "male";
    } else {
        return "female";
    }
}

std::string UserSettings::get_weekday_start() {
    /*
     * Return the weekday selected for which day the week begins on.
     * @return: String containing the day of week.
     */
    return ui.weekdayStartInput->currentText().toStdString();
}

std::string UserSettings::get_date_calculation_method() {
    /*
     * Returns the selected date calculation method.
     * @return: String denoting date calculation method.
     */

    if (ui.rollingDateRadioButton->isChecked()) {
        return "Rolling";
    } else {
        return "Fixed";
    }
}

void UserSettings::changed_date_calc() {
    /*
     * Disable/enable weekday start combobox.
     */

    if (ui.rollingDateRadioButton->isChecked()) {
        ui.weekdayStartInput->setEnabled(false);
    } else {
        ui.weekdayStartInput->setEnabled(true);
    }
}

int UserSettings::get_drink_limit() {
    /*
     * Get the drink limit that user has specified.
     */

    return ui.customLimitSpinBox->value();
}

void UserSettings::changed_limit_setting() {
    /*
     * Disable/enable the custom limit spinbox.
     */

    if (ui.customLimitRadioButton->isChecked()) {
        ui.customLimitSpinBox->setEnabled(true);
    } else {
        ui.customLimitSpinBox->setEnabled(false);
    }
}

std::string UserSettings::get_limit_standard() {
    /*
     * Get the user-selected drink standard.
     */

    std::string selected_standard {"NIAAA"};

    if (ui.niaaaStandardsRadioButton->isChecked()) {
        selected_standard = "NIAAA";
    } else if (ui.customLimitRadioButton->isChecked()) {
        selected_standard = "Custom";
    }

    return selected_standard;
}
// LCOV_EXCL_STOP