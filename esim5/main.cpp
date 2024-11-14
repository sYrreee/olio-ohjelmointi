#include "person.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    //luodaan ns. automaattinen olio
    //tällainen olio luodaan pinoon ja se
    //tuhoutuu automaattisesti
    Person objPerson;
    objPerson.setName("Teppo Testi");
    objPerson.setAge(24);
    cout <<"Henkilon nimi on: " <<objPerson.getName()<<endl;
    cout<<"Henkilon ika on : " <<objPerson.getAge()<<endl;
    objPerson.personInfo();

    //luodaan ns. automaattinen olio
    //tällainen olio luodaan pinoon ja se
    //täytyy tuhota itse

    Person *objPerson2;
    objPerson2=new Person;
    objPerson2->setName("Aino Joki");
    objPerson2->setAge(26);
    objPerson2->personInfo();
    delete objPerson2;
    objPerson2=nullptr;

    //Luodaan olio smart-pointterin avulla
    //tällainen olio luodaan kekoon ja se
    //tuhoutuu automaattisesti

    unique_ptr<Person> objPerson3=make_unique<Person>();
    objPerson3->setName("Liisa Virta");
    objPerson3->setAge(29);
    objPerson3->personInfo();

    return 0;
}
