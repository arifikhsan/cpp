#include <iostream>
using namespace std;

int main() {
    int angkaPertama, angkaKedua;

    cout << "Menentukan Dua Angka Terkecil" << endl;
    cout << "Masukkan angka pertama: " ; cin >> angkaPertama;
    cout << "Masukkan angka kedua: "   ; cin >> angkaKedua;

    cout << "Angka terkecil adalah: " << ((angkaPertama < angkaKedua) ? angkaPertama : angkaKedua) << endl;
}