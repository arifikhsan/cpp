#include <iostream>
using namespace std;

int main() {
    int kelipatan_pertama = 3;
    int kelipatan_kedua = 5;
    int angka_pembatas = 1000;
    int i, j;
    int jumlah = 0;

    cout << "=== Kelipatan Tiga atau Lima ===" << endl;

    for (i = 3, j = 5; i < angka_pembatas; i += kelipatan_pertama, j += kelipatan_kedua) {
        cout << i << " ";
        jumlah += i;
        if (j < angka_pembatas) {
            cout << j;
            jumlah += j;
        }
        cout << endl;
    }

    cout << "Jumlah: " << jumlah << endl;

}