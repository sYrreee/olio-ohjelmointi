#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car objectCar;

    objectCar.setBrand("Toyota");
    objectCar.setModel("Yaris");
    objectCar.setYearModel(1999);


    objectCar.printData();

    return 0;
}
