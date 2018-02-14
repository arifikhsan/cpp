#include <iostream>
using namespace std;

int main()
{
    int angkaPertama, angkaKedua, angkaKetiga;

    cout << "Menentukan Tiga Angka Terkecil" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> angkaPertama;
    cout << "Masukkan angka kedua: ";
    cin >> angkaKedua;
    cout << "Masukkan angka ketiga: ";
    cin >> angkaKetiga;

    if (angkaPertama < angkaKedua) {
        if (angkaPertama < angkaKetiga) {
            cout << "Angka terkecil adalah: " << angkaPertama << endl;
        } else {
            cout << "Angka terkecil adalah: " << angkaKetiga << endl;
        }
    } else {
        if (angkaKedua < angkaKetiga) {
            cout << "Angka terkecil adalah: " << angkaKedua << endl;
        } else {
            cout << "Angka terkecil adalah: " << angkaKetiga << endl;
        }
    }

    cout << "Menentukan Tiga Angka Terkecil" << endl;
    cout << "Masukkan angka pertama: "; cin >> angkaPertama;
    cout << "Masukkan angka kedua: ";   cin >> angkaKedua;
    cout << "Masukkan angka ketiga: ";  cin >> angkaKetiga;
    cout << smallest(angkaPertama, angkaKedua, angkaKetiga);

}

int smallest(int x, int y, int z){
    return std::min({x, y, z});
}