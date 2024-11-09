#include <iostream>


using namespace std;



void calcSum(int a, int b) {
    cout << " summa: " << a + b << endl;
}


void calcDiv(int a, int b) {
    if (b != 0) {
        cout << "Osamäärä: " << a / b << endl;
    } else {
        cout << "Virhe!!!!"<< endl;
    }
}
int retSum(int a, int b) {
    return a + b;
}
float retDiv(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Virhe!!!" << endl;
        return 0;
    }
}

int main() {
    int a, b;


    cout << " Anna a : ";
    cin >> a;
    cout << " Anna b : ";
    cin >> b;


    calcSum(a, b);
    calcDiv(a, b);
    int sum = retSum(a, b);
    cout << "Summa (retSum): " << sum << endl;

    float div = retDiv(a, b);
    cout << "Osamäärä (retDiv): " << div << endl;

    return 0;
}
