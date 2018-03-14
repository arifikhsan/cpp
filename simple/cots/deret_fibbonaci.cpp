#include <iostream>
using namespace std;

int main() {
    int angka_pertama = 0, angka_kedua = 1, angka_selanjutnya, batas_angka = 4000000, jumlah_angka = 0;

    cout << "=== Deret Fibbonaci ===" << endl;

    angka_selanjutnya = angka_pertama + angka_kedua;

    while (angka_selanjutnya < batas_angka) {
        if ((angka_selanjutnya % 2) == 0) {
            cout << angka_selanjutnya << " ";
            jumlah_angka++;
        }
        angka_pertama = angka_kedua;
        angka_kedua = angka_selanjutnya;
        angka_selanjutnya = angka_pertama + angka_kedua;
    }

    cout << endl;
    cout << "Jumlah angka Fibbonaccinya adalah: " << jumlah_angka << endl;
}