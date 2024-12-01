#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>

class Engine {
public:
    Engine(int horsepower = 0, double displacement = 0.0);
    int getHorsepower() const;
    void setHorsepower(int horsepower);
    double getDisplacement() const;
    void setDisplacement(double displacement);

private:
    int horsepower;
    double displacement;
};

#endif // ENGINE_H

