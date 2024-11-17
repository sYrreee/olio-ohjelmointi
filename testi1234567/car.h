#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();
    void printData();
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
};

#endif // CAR_H
