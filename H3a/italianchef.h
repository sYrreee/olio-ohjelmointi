#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    // Konstruktori
    ItalianChef(string chefName);

    // Destruktori
    ~ItalianChef();


    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
