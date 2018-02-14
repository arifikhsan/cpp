#include <iostream>
using namespace std;

int main() {
    int a = 100, b = 200;

    cout << "=== Menentukan Angka Terbesar Menggunakan Fungsi ===" << endl;
    cout << "Angka Terbesar adalah: " << max(a, b) << endl;
}

int max(int angkaPertama, int angkaKedua) {
    return ((angkaPertama > angkaKedua) ? angkaPertama : angkaKedua);
}