//
//   Original code by Arif Ikhsanudin and Rizqie Miftakhudin Noor
//
#include <iostream>
using namespace std;

int main() {
    int inputGrades[5];

    cout << "=== Input Five Grades ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Put in grade " << i + 1 << " || inputGrades[" << i << "]: "; cin >> inputGrades[i];
    }

    for (int j = 0; j < 5; j++) {
        cout << "Value of Grade " << j + 1 << " || inputGrades[" << j << "] is: " << inputGrades[j] << endl;
    }
}