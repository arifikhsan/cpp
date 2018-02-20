// Celsius Fahrenheit F = C × 1.8 + 32
// Celsius kelvin K = C + 273.15
// Celsius Rankine Ra = C × 1.8 + 32 + 459.67
// Celsius Réaumur Re = C × 0.8
// http://www.csgnetwork.com/temp2conv.html

#include <iostream>
using namespace std;

float celciusToFarenheit(float celcius);
float celciusToKelvin(float celcius);
float celciusToReamur(float celcius);

int main() {
    float celcius;

    cout << "=== Koversi Suhu ke Kelvin dan Reamur ===" << endl;
    cout << "Masukkan suhu dalam celcius: "; cin >> celcius;

    cout << "------------------" << endl;

    cout << "Suhu dalam Farenheit   : " << celciusToFarenheit(celcius) << " derajad" << endl;
    cout << "Suhu dalam Kelvin      : " << celciusToKelvin(celcius) << " derajad" << endl;
    cout << "Suhu dalam Reamur      : " << celciusToReamur(celcius) << " derajad" << endl;
}

float celciusToReamur(float celcius) {
    return (4.0 / 5.0) * celcius;
}

float celciusToFarenheit(float celcius) {
    return (celcius * 9.0 / 5.0) + 32;
}

float celciusToKelvin(float celcius) {
    return (celcius + 273.15);
}

