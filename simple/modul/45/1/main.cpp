#include <iostream>
using namespace std;

main() {
    float pendapatan, jasa = 0, komisi = 0, total = 0;
    
    cout << "Pendapatan hari ini Rp. "; cin >> pendapatan;

    if (pendapatan >= 0 && pendapatan <= 200000) {
        jasa = 10000;
        komisi = 0.1 * pendapatan;
    } else {
        if (pendapatan <= 500000) {
            jasa = 20000;
            komisi = 0.15 * pendapatan;
        } else {
            jasa = 30000;
            komisi = 0.2 * pendapatan;
        }
    }

    total = komisi + jasa;

    cout << "Uang jasa Rp. " << jasa << endl;
    cout << "Uang komisi Rp. " << komisi << endl;
    cout << "-------------------" << endl;
    cout << "Hasil total komisi dan jasa Rp. " << total << endl;
}