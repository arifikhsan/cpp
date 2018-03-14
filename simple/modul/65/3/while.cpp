#include <iostream>
using namespace std;

int main() {
    int pengulangan;
    int i = 1;
    int angka;
    int jumlah_angka = 0;
    float rata_rata;

    cout << "=== Menghitung Rata - rata Menggunakan While ===" << endl;
    cout << "Masukkan banyaknya pengulangan: "; cin >> pengulangan;

    while (i <= pengulangan) {
        cout << "Masukkan angka ke " << i << " : "; cin >> angka;
        jumlah_angka += angka;
        i++;
    }

    rata_rata = jumlah_angka / pengulangan;
    cout << "Jumlah seluruh angka adalah: " << jumlah_angka << endl;
    cout << "Rata - rata: " << rata_rata << endl;
}