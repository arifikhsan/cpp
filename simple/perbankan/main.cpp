#include <iostream>
using namespace std;

int main() {
    int my_bank = 0, input_money = 0;

    cout << "=== Aplikasi Perbankan ===" << endl;

    do {
        cout << "Masukkan uang Anda: "; cin >> input_money;
        my_bank += input_money;
        cout << "Uang dalam Bank: " << my_bank << endl;
    } while (input_money != 0);

    cout << "=== Terima kasih telah menggunakan jasa Bank ini ===" << endl;

}