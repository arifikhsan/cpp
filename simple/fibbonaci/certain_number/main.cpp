#include <iostream>
using namespace std;

int main() {
    int n, angkaPertama = 0, angkaKedua = 1, angkaSelanjutnya = 0;

    cout << "=== Deret Fibbonaci ===" << endl;
    cout << "=== angka selanjutnya adalah jumlah dari dua angka terakhir ===" << endl;
    cout << "Masukkan angka maksimal pengulangan: ";
    cin  >> n;

    cout << angkaPertama << " " << angkaKedua << " ";
    angkaSelanjutnya = angkaPertama + angkaKedua;

    while (angkaSelanjutnya < n) {
        cout << angkaSelanjutnya << " ";
        angkaPertama = angkaKedua;
        angkaKedua = angkaSelanjutnya;
        angkaSelanjutnya = angkaPertama + angkaKedua;
    }

    cout << endl;
}
