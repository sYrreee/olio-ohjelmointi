#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{
    Chef objectChef1;


    //kutsutaan metodeja makeSalad ja makeSoup
    objectChef1.makeSalad();
    objectChef1.makeSoup();

    ItalianChef objectChef2;


    objectChef2.makeSalad();
    objectChef2.makePasta();

    return 0;
}
