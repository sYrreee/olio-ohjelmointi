#include "car.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;
    Car objCar_1=Car("Toyota", "Corolla", 1999);
    Car objCar_2=Car("Toyota", "Avensis", 2004);
    Car objCar_3=Car("Toyota", "Yaris", 2006);

    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    carList[1].printData();
    cout<<"Tulosta kaikki autot"<<endl;
    for(int x=0; x<=2; x++){
        carList[x].printData();
    }

    return 0;
}
