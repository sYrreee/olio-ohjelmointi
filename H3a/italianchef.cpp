#include "italianchef.h"

ItalianChef::ItalianChef(string chefName) : Chef(chefName) {
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << name << " destruktori" << endl;
}

string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    cout << "ItalianChef " << name << " makes pasta" << endl;
}

