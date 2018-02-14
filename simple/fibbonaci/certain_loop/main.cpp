#include <iostream>
using namespace std;

int main() {
    int n, angkaPertama = 0, angkaKedua = 1, angkaSelanjutnya;

    cout << "=== Deret Fibbonaci ===" << endl;
    cout << "=== angka selanjutnya adalah jumlah dari dua angka terakhir ===" << endl;
    cout << "Masukkan banyaknya pengulangan: ";
    cin  >> n;

    cout << angkaPertama << " " << angkaKedua << " ";

    for (int i = 0; i < n; i++) {
        angkaSelanjutnya = angkaPertama + angkaKedua;
        cout << angkaSelanjutnya << " ";
        angkaPertama = angkaKedua;
        angkaKedua = angkaSelanjutnya;
    }

    cout << endl;
    return 0;
}
