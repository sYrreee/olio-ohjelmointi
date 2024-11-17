#include "car.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{

    Car* myCar = new Car();
    myCar->setBrand("Toyota");
    myCar->setModel("Yaris");
    myCar->setYearModel(1999);


    myCar->printData();


    return 0;
}
