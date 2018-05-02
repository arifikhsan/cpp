#include <iostream>
using namespace std;

int main() {
    int matriksA[2][2];
    int matriksB[2][2];
    int matriksC[2][2];

    cout << "=== Penjumlahan Matriks 2 X 2 ===" << endl << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan nilai matriks A. baris ke " << i + 1 << ". kolom ke " << j + 1 << ": ";
            cin >> matriksA[i][j];
        }
    }

    cout << endl << "Matriks A adalah: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriksA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan nilai matriks B. baris ke " << i + 1 << ". kolom ke " << j + 1 << ": ";
            cin >> matriksB[i][j];
        }
    }

    cout << endl << "Matriks B adalah: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriksB[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }

    cout << endl << "Matriks C = matriks A + B adalah: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriksC[i][j] << " ";
        }
        cout << endl;
    }
}