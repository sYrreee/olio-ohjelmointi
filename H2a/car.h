#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{

private:

    string brand();
    string model();
    int yearModel();

public:

    Car();
    void printData();
    string setBrand();
    string setModel();
    int setYearModel();



};

#endif
