#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Engine.h"
#include "Wheel.h"

using namespace std;
class Car {
public:
    //konstruktori
    Car();
    void setEngine();
    void setWheels();
    string getModel() const;
    void setModel(const string& model);
    string getBrand() const;
    void setBrand(const string& brand);
    void printDetails() const;

private:
    //luodaan engine-olio
    Engine objEngine;
    //luodaan neljä wheel-oliota
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
};
#endif
