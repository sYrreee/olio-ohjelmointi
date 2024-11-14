#include <iostream>
#include <string>
#include <memory>  // Smart pointerin käyttö

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    // Rakentaja
    Car(string brand = "Unknown", string model = "Unknown", int yearModel = 0)
        : brand(brand), model(model), yearModel(yearModel) {}

    // Setters
    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    void setYearModel(int y) { yearModel = y; }

    // Tulostaa auton tiedot
    void printData() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year Model: " << yearModel << endl;
    }
};

int main() {
    // Luo Car-olio pinomuistiin ja asettaa sen tiedot
    unique_ptr<Car> myCar = make_unique<Car>("Toyota", "Corolla", 2000);

    // Tulosta auton tiedot
    myCar->printData();

    return 0;
}

