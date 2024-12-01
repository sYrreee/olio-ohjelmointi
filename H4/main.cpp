#include <Car.h>
#include <iostream>

int main() {
    //luodaan car1- olio
    Car car1;
    car1.setBrand("Toyota");
    car1.setModel("Corolla");
    //kutsutaan setEngine ja setWheels metodeja
    car1.setEngine();
    car1.setWheels();

    car1.printDetails();

    return 0;
}
