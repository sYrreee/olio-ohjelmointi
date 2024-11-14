#include <iostream>

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
        return 0;
    }
}




int main() {
    int a, b;


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
    return 0;
}


