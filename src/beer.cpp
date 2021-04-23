//
// Created by Ross Wardrup on 9/19/20.
//

#include "mainwindow.h"
#include "calculate.h"
#include <iostream>

// LCOV_EXCL_START
void MainWindow::update_beer_fields() {
    /*
     * Read rows in the DB and populate the brewery, type, and name dropdowns with unique values.
     */

    std::set<QString> breweries;
    std::set<QString> types;
    std::set<QString> subtypes;
    std::set<std::string> names;
    std::vector<std::string> names_tmp;
    std::vector<Drink> all_beers = Database::filter("Alcohol Type", "Beer", storage);

    // Block signals to avoid crashing
    QSignalBlocker brewery_signal_blocker(ui->beerBreweryInput);
    QSignalBlocker type_signal_blocker(ui->beerTypeInput);
    QSignalBlocker subtype_signal_blocker(ui->beerSubtypeInput);
    QSignalBlocker name_signal_blocker(ui->beerNameInput);

    ui->beerBreweryInput->clear();
    ui->beerTypeInput->clear();
    ui->beerSubtypeInput->clear();
    ui->beerNameInput->clear();

    for (const auto& beer : all_beers) {
        QString brewery_name = QString::fromStdString(beer.producer);
        QString beer_type = QString::fromStdString(beer.type);
        QString beer_subtype = QString::fromStdString(beer.subtype);
        std::string name = beer.name;

        breweries.insert(brewery_name);
        types.insert(beer_type);
        subtypes.insert(beer_subtype);
        names.insert(name);
    }

    for (const auto& brewery : breweries) {
        if (!brewery.isEmpty()) {
            ui->beerBreweryInput->addItem(brewery);
        }
    }

    for (const auto& type : types) {
        if (!type.isEmpty()) {
            ui->beerTypeInput->addItem(type);
        }
    }

    for (const auto& subtype : subtypes) {
        if (!subtype.isEmpty()) {
            ui->beerSubtypeInput->addItem(subtype);
        }
    }

    for (const auto& name : names) {
        if (!name.empty()) {
            if (std::find(names_tmp.begin(), names_tmp.end(), name) == names_tmp.end())
                names_tmp.push_back(name);
        }
    }

    std::sort(names_tmp.begin(), names_tmp.end(), Calculate::compare_strings);

    for (const auto& name : names_tmp) {
        QString name_q = QString::fromStdString(name);
        ui->beerNameInput->addItem(name_q);
    }

    // Reset to first name in field
    ui->beerNameInput->setCurrentIndex(0);
    update_beer_types_producers();
    std::string beer_notes_text = get_latest_notes(ui->beerNameInput->currentText().toStdString(), "Beer");
    ui->beerNotesInput->setText(QString::fromStdString(beer_notes_text));
}

void MainWindow::populate_beer_fields(const Drink& drink_at_row) {
    /*
     * Populate the beer entry fields if user is on the beer entry tab.
     */

    QDate date = format_date_for_input(drink_at_row);
    // Only update the beer fields if the user is currently on the beer tab
    std::string notes = get_latest_notes(drink_at_row.name, drink_at_row.alcohol_type);
    ui->beerDateInput->setDate(date);
    ui->beerNameInput->setCurrentText(drink_at_row.name.c_str());
    ui->beerTypeInput->setCurrentText(drink_at_row.type.c_str());
    ui->beerSubtypeInput->setCurrentText(drink_at_row.subtype.c_str());
    ui->beerBreweryInput->setCurrentText(drink_at_row.producer.c_str());
    ui->beerAbvInput->setValue(drink_at_row.abv);
    ui->beerIbuInput->setValue(drink_at_row.ibu);
    ui->beerRatingInput->setValue(drink_at_row.rating);
    ui->beerNotesInput->setText(notes.c_str());
    ui->beerSizeInput->setValue(drink_at_row._size);

    // Switch to the beer tab
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::update_beer_types_producers() {
    /*
     * Update beer type and brewery when name input changes.
     */

    // This fixes crashes when changing with rows selected.
    QSignalBlocker type_input_signal_blocker(ui->beerTypeInput);
    QSignalBlocker brewery_input_signal_blocker(ui->beerBreweryInput);

    std::string input_beer = ui->beerNameInput->currentText().toStdString();
    Drink selected_beer = Database::get_drink_by_name(storage, "Beer", input_beer);

    if (!selected_beer.id || selected_beer.id == -1) {  // Clear fields if new name
        clear_fields("Beer");
    } else {
        std::string beer_type = selected_beer.type;
        std::string beer_subtype = selected_beer.subtype;
        std::string brewery = selected_beer.producer;
        double abv = selected_beer.abv;
        double ibu = selected_beer.ibu;
        double size = selected_beer._size;

        if (options.units == "Metric") {
            size = Calculate::oz_to_ml(size);
        }

        int rating = selected_beer.rating;
        ui->beerTypeInput->setCurrentText(QString::fromStdString(beer_type));
        ui->beerSubtypeInput->setCurrentText(QString::fromStdString(beer_subtype));
        ui->beerBreweryInput->setCurrentText(QString::fromStdString(brewery));
        ui->beerAbvInput->setValue(abv);
        ui->beerIbuInput->setValue(ibu);
        ui->beerSizeInput->setValue(size);
        ui->beerRatingInput->setValue(rating);

        // Set notes to the notes for beer in the name input
        std::string notes = get_latest_notes(ui->beerNameInput->currentText().toStdString(), get_current_tab());
        ui->beerNotesInput->setText(QString::fromStdString(notes));
    }
}

Drink MainWindow::get_beer_attrs_from_fields(std::string alcohol_type) {
    /*
     * Populate drink attributes with user input.
     */

    Drink drink;

    std::string drink_date = ui->beerDateInput->date().toString("yyyy-MM-dd").toStdString();
    drink.date = drink_date;
    drink.name = ui->beerNameInput->currentText().toStdString();
    drink.type = ui->beerTypeInput->currentText().toStdString();
    drink.subtype = ui->beerSubtypeInput->currentText().toStdString();
    drink.producer = ui->beerBreweryInput->currentText().toStdString();
    drink.vintage = -999;
    drink.ibu = ui->beerIbuInput->value();
    drink.abv = ui->beerAbvInput->value();
    drink._size = ui->beerSizeInput->value();
    drink.rating = ui->beerRatingInput->value();
    drink.notes = ui->beerNotesInput->toPlainText().toStdString();
    drink.alcohol_type = std::move(alcohol_type);

    return drink;
}
// LCOV_EXCL_STOP