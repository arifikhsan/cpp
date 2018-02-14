#include <iostream>
using namespace std;

int main() {
    int greetingsOption = 2;

    switch (greetingsOption) {
        case 1:
            cout << "Hei" << endl;
            break;
        case 2:
            cout << "Hola" << endl;
            break;
        default:
            cout << "Hello" << endl;
    }
    return 0;
}