#include <iostream>
using namespace std;

int main() {
    // int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int a[3][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} };
    // cout << a[0][0] << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "a[" << i << "][" << j << "]: " << a[i][j] << endl;
        }
    }

    int b[5][2] = { {11, 12}, {21, 22}, {31, 32}, {41, 42}, {51, 52} };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "b[" << i << "][" << j << "]: " << b[i][j] << endl;
        }
    }
}