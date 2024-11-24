#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    //konstruktori
    ItalianChef();


    //destruktori
    ~ItalianChef();

    string ItalinChef();

    string getName();

    void makePasta();

private:
    string Chef;
};

#endif // ITALIANCHEF_H
