#include "car.h"

Car::Car() {
#include "Car.h"
#include <iostream>  // Tarvitaan tulostamiseen

    // Rakentaja, joka alustaa auton merkin, mallin ja valmistusvuoden
    Car::Car(std::string brand, std::string model, int yearModel)
        : brand(brand), model(model), yearModel(yearModel) {}

    // Setterit
    void Car::setBrand(const std::string& b) {
        brand = b;
    }

    void Car::setModel(const std::string& m) {
        model = m;
    }

    void Car::setYearModel(int y) {
        yearModel = y;
    }

    // Tulostaa auton tiedot
    void Car::printData() const {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year Model: " << yearModel << std::endl;
    }

}
