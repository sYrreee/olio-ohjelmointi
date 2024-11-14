#include <iostream>

<<<<<<< HEAD
using namespace std;


void calcSum(int a, int b){
    cout<<" summa:  "<< a + b <<endl;
}
void calcDiv(int a, int b){
    if (b!= 0){
        cout<<" osamaara : "<< a / b <<endl;
    } else {
        cout<<"VIRHE!!!!!";
    }
}

int retSum(int a, int b){
    return a + b;
}
int retDiv(int a, int b){
    if(b != 0){
        return a / b;
    } else{
        cout<<"VIRHE!!!!!!"<<endl;
=======

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
>>>>>>> 8a5794a960f1b647bcc00ed4a8b50a03515022ed
        return 0;
    }
}

<<<<<<< HEAD



=======
>>>>>>> 8a5794a960f1b647bcc00ed4a8b50a03515022ed
int main() {
    int a, b;


<<<<<<< HEAD
    cout << "Anna a: " << endl;
    cin >> a;
    cout << "Anna b: " << endl;
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    int sum = retSum(a,b);
    cout <<" summa (retSum): "<<sum<<endl;

    float div = retDiv(a,b);
    cout <<" summa (retDiv): "<<div<<endl;
=======
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

>>>>>>> 8a5794a960f1b647bcc00ed4a8b50a03515022ed
    return 0;
}
