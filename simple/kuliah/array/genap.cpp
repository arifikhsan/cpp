#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    int myNumbers[10];

    for (int i = 0; i < 10; i++) {
        cout << "myNumbers[" << i << "] : "; cin >> myNumbers[i];
    }

    cout << "+++++++++++" << endl << "Bilangan Genap" << endl;

    for (int j = 0; j < 10; j++) {
        if ((myNumbers[j] % 2) == 0) {
            // cout << "myNumbers[" << j << "] : " << myNumbers[j] << endl;
            cout << "myNumbers[" << j << "]: " << "1";
        } else {
            cout << "myNumbers[" << j << "]: " << "0";
        }
        cout << endl;
    }
}