#include <iostream>
// #include <cv.h>
#include <cstdlib>
using namespace std;

int main() {
    int input_menu;

    cout << "Menu Utama: " << endl;
    cout << endl;

    cout << "1. Hitung luas permukaan kubus" << endl;
    cout << "2. Hitung volume kubus" << endl;
    cout << "3. Hitung diagonal sisi kubus" << endl;
    cout << "4. Hitung diagonal ruang kubus" << endl;
    cout << "5. Keluar" << endl;
    cout << endl;

    cout << "Pilih Menu: "; cin >> input_menu;

    system("clear");
    switch (input_menu) {
        case 1: 
            cout << "Luas permukaan kubus" << endl;
            break;
        case 2: 
            cout << "Volume kubus" << endl;
            break;
        case 3: 
            cout << "Diagonal sisi kubus" << endl;
            break;
        case 4: 
            cout << "Diagonal ruang kubus" << endl;
            break;
        case 5: 
            cout << "Keluar" << endl;
            break;
        default: cout << "Invalid input" << endl;
    }
}