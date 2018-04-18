//
//   Original code by Arif Ikhsanudin and Rizqie Miftakhudin Noor
//
#include <iostream>
using namespace std;

int main() {
    int myNumbers[10];
    int sumOfMyNumbers = 0;

    cout << "=== Counter of 10 Numbers ===" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Put an integer number " << i + 1 << ": "; cin >> myNumbers[i];
        sumOfMyNumbers += myNumbers[i];
    }
    cout << endl << "The sum of all numbers is: " << sumOfMyNumbers << "." << endl;
}