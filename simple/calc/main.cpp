#include <iostream>
using namespace std;

int main() {
    float numberOne, numberTwo;

    cout << "=== Kalkulator ===" << endl;
    cout << "Masukkan dua angka" << endl;

    cout << "Angka pertama: "; cin >> numberOne;
    cout << "Angka kedua: "; cin >> numberTwo;

    cout << "Hasil dari (" << numberOne << ") + (" << numberTwo << ") = " << numberOne + numberTwo << endl;
    cout << "Hasil dari (" << numberOne << ") - (" << numberTwo << ") = " << numberOne - numberTwo << endl;
    cout << "Hasil dari (" << numberOne << ") * (" << numberTwo << ") = " << numberOne * numberTwo << endl;
    cout << "Hasil dari (" << numberOne << ") / (" << numberTwo << ") = " << numberOne / numberTwo << endl;

    cout << "=== Selesai ===" << endl;

    return 0;
}