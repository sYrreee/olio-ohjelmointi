#include "car.h"
#include <iostream>
using namespace std;

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
void printData() {

    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << yearModel << endl;
}
