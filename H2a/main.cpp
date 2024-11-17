#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{

    Car objectCar;

    objectCar.setBrand("Toyota");
    objectCar.setModel("Corolla");
    objectCar.setYearModel(2000);

    objectCar.printData();
    // luodaan olio kekomuistiin ja asetetaan leveys ja korkeus
    Rectangle *objectRectangle = new Rectangle;
    objectRectangle->setHeight(20);
    objectRectangle->setWidth(10);

    objectRectangle->RectangleInfo();


    //tuhoaa olion
    delete objectRectangle;
    objectRectangle = nullptr;

    // luodaan smart-pointerilla student olio

    unique_ptr<Student> student1= make_unique<Student>();
    student1->setName("Teppo");
    student1->setStudentNumber(199);
    student1->setAverage(7.8);
    cout << " nimi: " << student1->getName() <<endl;
    cout << "opiskelijanumero: " << student1->getStudentNumber() <<endl;
    cout << "keskiarvo: " << student1->getAverage() <<endl;

    return 0;
}
