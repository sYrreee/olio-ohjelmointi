#ifndef CAR_H
#define CAR_H

#include <string>  // Tarvitaan string-tyypin käyttämiseksi

class Car {
private:
    std::string brand;      // Auton merkki
    std::string model;      // Auton malli
    int yearModel;          // Auton valmistusvuosi

public:
    Car();
    // Rakentaja, joka alustaa auton merkin, mallin ja valmistusvuoden
    Car(std::string brand = "Unknown", std::string model = "Unknown", int yearModel = 0);

    // Setterit
    void setBrand(const std::string& b);
    void setModel(const std::string& m);
    void setYearModel(int y);

    // Tulostaa auton tiedot
    void printData() const;
};

#endif // CAR_H
