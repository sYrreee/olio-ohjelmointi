#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();

    void getArea();
    void getCircum();

    double getWidth() const;
    void setWidth(double newWidth);
    double getHeight() const;
    void setHeight(double newHeight);
    void RectangleInfo();
};

#endif // RECTANGLE_H
