#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    int jumlah = 0;
    int k = 5;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            jumlah += j;
            if (j == 1) {
                cout << j;
            } else {
                cout << " + " << j;
            }

            if (j == i) {
                while (k > 0) {
                    for (int l = 1; l <= k; l++) {
                        cout << "    ";
                    }
                    break;
                }
                k--;
                cout << " = ";

                cout << jumlah;
            }
        }
        cout << endl;
        jumlah = 0;
    }
}