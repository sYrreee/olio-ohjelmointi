#include "myfunctions.h"
#include <iostream>

using namespace std;

int main() {
    int num;
    int result;
    cout << "Lasketaan kertoma!" << endl;
    cout << " Anna kokonaisluku " << endl;
    cin >> num;
    result = factorial(num);
    if (result == -1) {
        cout << "Kertomaa ei ole negatiiviselle luvulle " << endl;
    } else {
        cout << " Luvun  " << num << "kertoma = " << result << endl;
    }

    return 0;
}
