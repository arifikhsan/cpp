#include <iostream>
using namespace std;

int angkaPertama = 4;
int angkaKedua = 1;
int terbesar;

int fungsiPertama();

void fungsiKedua() {
    cout << "Fungsi Kedua" << endl;
}

int main() {
    cout << "Ini di dalam fungsi main" << endl;
    fungsiPertama();
    fungsiKedua();
}

int fungsiPertama() {
    cout << "Ini di dalam fungsi pertama" << endl;
    cout << "Saya punya dua angka " << endl;
    cout << "Angka pertama: " << angkaPertama << endl;
    cout << "Angka kedua: " << angkaKedua << endl;

    if (angkaPertama > angkaKedua) {
        terbesar = angkaPertama;
    }

    cout << "yang terbesar adalah :" << terbesar << endl;
}

