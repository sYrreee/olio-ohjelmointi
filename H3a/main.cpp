#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main() {

    Chef objectChef1("Gordon Ramsay");

    objectChef1.makeSalad();
    objectChef1.makeSoup();


    ItalianChef objectChef2("Anthony Bourdain");
    objectChef2.makeSalad();
    objectChef2.makePasta();
    objectChef2.makeSoup();

    cout << "name of the Italian Chef is " << objectChef2.getName() << endl;

    return 0;
}
