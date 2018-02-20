#include <stdio.h>
#include <ctype.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
    float tinggiBadan, beratIdeal;
    char jenisKelamin;

    cout << "=== Menentukan berat badan ideal ===" << endl;
    cout << "Masukkan tinggi badan dalam cm: "; cin >> tinggiBadan;
    cout << "Jenis kelamin (l/p): "; cin >> jenisKelamin;
    jenisKelamin = tolower(jenisKelamin, locale());
    
    if (jenisKelamin == 'l') {
        beratIdeal = (tinggiBadan - 100) - ((tinggiBadan - 100) * 10 / 100);
    } else {
        beratIdeal = (tinggiBadan - 100) - ((tinggiBadan - 100) * 15 / 100);
    }

    cout << "-------------" << endl;
    cout << "Berat badan ideal adalah: " << beratIdeal << " kg" << endl;
}
