// R = (4 / 5) C
// F = 9 / 5 C + 32
// K = C + 273
// C = (5 / 4) R

#include <iostream>
using namespace std;

int main() {
    float celcius;

    cout << "=== Koversi Suhu ke Kelvin dan Reamur ===" << endl;

    cout << "Masukkan suhu dalam celcius"; cin >> celcius;
    cout << "Suhu dalam Reamur: " << celciusToReamur << "derajad" << endl;
    cout << "Suhu dalam Kelvin: " << celciusToKelvin << "derajad" << endl;
}

float celciusToReamur(float celcius) {
    return (4 / 5) * celcius
}

float celciusToKelvin(float celcius) {
    return (celcius + 273)
}