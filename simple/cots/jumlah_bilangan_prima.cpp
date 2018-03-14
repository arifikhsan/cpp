#include <iostream>
using namespace std;

int main() {
    bool prima = false;
    int angka_pembatas = 10;
    int jumlah_angka_prima = 0;
    int angka = 10;

    cout << "=== Jumlah Bilangan Prima ===" << endl;

    while (int j = 0 < 10) {
        if (angka == 2)
        {
            prima = true;
            jumlah_angka_prima += angka;
        } else {
            for (int i = 2; i < angka; i++)
            {
                if ((angka % i) == 0)
                {
                    prima = false;
                    break;
                }
                else
                {
                    prima = true;
                    jumlah_angka_prima += angka;
                }
            }
        }
    j++;
    }
    // cout << prima << endl;

    cout << endl;
    cout << "Jumlah angka prima: " << jumlah_angka_prima << endl;

}