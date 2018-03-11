#include <iostream>
using namespace std;

int main() {
    int i;
    int j;

    for (i = 1; i <= 5; i++) {
        for (j = 0; j < i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}