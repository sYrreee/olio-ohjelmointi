#include <iostream>

using namespace std;

// Funktiot, jotka laskevat summan ja osamäärän
void calcSum(int a, int b) {
    int sum = a + b;
    cout << "Summa = " << sum << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei voi olla nolla!" << endl;
    } else {
        float div = static_cast<float>(a) / b;  // Jakaminen float-tyyppisinä
        cout << "Osamäärä = " << div << endl;
    }
}

int main() {
    int a, b;

    // Kysytään käyttäjältä kaksi kokonaislukua
    cout << "Anna a: ";
    cin >> a;
    cout << "Anna b: ";
    cin >> b;

    // Lasketaan ja tulostetaan summa
    calcSum(a, b);

    // Lasketaan ja tulostetaan osamäärä
    calcDiv(a, b);

    return 0;
}
