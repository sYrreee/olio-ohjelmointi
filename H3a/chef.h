#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;


class Chef
{
private:

protected:
    string name;
public:
    // konstruktori
    Chef();
    // destruktori
    ~Chef();

    void makeSalad();
    void makeSoup();

};

#endif // CHEF_H
