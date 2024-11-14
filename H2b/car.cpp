#include <car.h>
#include <iostream>

Car::Car(string b, string m, int ym)
{
    brand=b;
    model=m;
    yearModel=ym;
}

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

void Car::printData()
{
    cout<<" merkki= "<<brand<<" malli ="<<model<<" vuosimalli= "<<yearModel<<endl;
}
