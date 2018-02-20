#include <iostream>
using namespace std;

int main() {
    int panjang, lebar, tinggi;

    cout << "=== Menghitung Volume Balok ===" << endl;
    cout << "Masukkan ukuran balok dalam cm" << endl;

    cout << "Masukkan panjang: "; cin >> panjang;
    cout << "Masukkan lebar: "; cin >> lebar;
    cout << "Masukkan tinggi: "; cin >> tinggi;

    cout << "---------------" << endl;

    cout << "Luas balok adalah: " << panjang * lebar << " cm" << endl;
    cout << "Volume balok adalah: " << panjang * lebar * tinggi << " cm" << endl;
}