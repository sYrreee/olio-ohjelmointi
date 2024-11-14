#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car{

private:
    string brand;
    string model;
    int yearModel;


public:
    Car(string brand = "Unknown", string model ="Unknown", int yearModel = 0)
        :brand(brand),model(model),yearModel(yearModel){}


    void setBrand();
    void setModel();
    int setYearModel;

    void printData() const{
        cout<<" Brand: "<< brand <<endl;
        cout<<" Model: "<< model <<endl;
        cout<<" yearmodel: "<< yearModel <<endl;
    }





};


#endif
