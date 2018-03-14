#include <iostream>
using namespace std;

int main() {
    int angka_pengulangan = 1000;
    int jumlah_pangkat_pengulangan = 0;
    int angka_pangkat_dua = 0;
    int jumlah_pangkat_dua = 0;

    cout << "=== Selisih Angka ===" << endl;

    for (int i = 1; i <= angka_pengulangan; i++) {
        jumlah_pangkat_pengulangan += i * i;
        angka_pangkat_dua += i;
    }

    jumlah_pangkat_dua = angka_pangkat_dua * angka_pangkat_dua;


    cout << "Jumlah pangkat pertama: " << jumlah_pangkat_pengulangan << endl;
    cout << "Jumlah pangkat dua: " << jumlah_pangkat_dua << endl;
    cout << "Selisihnya adalah: " << jumlah_pangkat_dua - jumlah_pangkat_pengulangan << endl;
}