#include "rectangle.h"
#include <iostream>
using namespace std;
double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::RectangleInfo()
{
   cout<<"pinta-ala:"<< width*height<<endl;
   cout<<"ymparysmitta:"<< 2*(width+height)<<endl;
}

Rectangle::Rectangle() {

}

void Rectangle::getArea()
{

}



void Rectangle::getCircum()
{

}
