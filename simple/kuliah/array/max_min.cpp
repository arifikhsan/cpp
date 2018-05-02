#include <iostream>
using namespace std;

int main() {
    int myArrays[10];
    int biggestNumber = 0;
    int smallestNumber = 0;

    cout << "=== Searching of the Biggest and Smallest number in 10 of Array ===" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Put of myArrays[" << i << "]: "; cin >> myArrays[i];    
    }

    for (int j = 0; j < 10; j++) {
        smallestNumber = myArrays[0];
        biggestNumber = myArrays[0];

        if (myArrays[j] > biggestNumber) {
            biggestNumber = myArrays[j];
        }
        if (myArrays[j] < smallestNumber) {
            smallestNumber = myArrays[j];
        }
    }

    cout << endl;
    cout << "The largest number in array is: " << biggestNumber << endl;
    cout << "The smallest number in array is: " << smallestNumber << endl;
}