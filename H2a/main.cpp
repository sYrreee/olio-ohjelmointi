#include "car.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    Car *myCar;
    unique_ptr<Car> *myCar = new unique_ptr(make_unique<Car>("Toyota", "Corolla", 2000));

    myCar->>printData();
    return 0;
}
