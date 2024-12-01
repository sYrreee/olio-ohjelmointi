#ifndef WHEEL_H
#define WHEEL_H
#include<iostream>
using namespace std;

class Wheel {
public:
    Wheel(int size = 0, const string& type = "");
    int getSize() const;
    void setSize(int size);
    string getType() const;
    void setType(const string& type);

private:
    int size;
    string type;
};

#endif // WHEEL_H
