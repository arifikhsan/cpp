//
//   Original code by Arif Ikhsanudin and Rizqie Miftakhudin Noor
//
#include <iostream>
using namespace std;

int main() {
    float cumulativeAchievementIndexes[6];
    float sumOfcumulativeAchievementIndexes;

    cout << "=== Average of Cumulative Achievement Index of 6 Persons ===" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Put a cumulative achievement index of person " << i + 1 << ": "; cin >> cumulativeAchievementIndexes[i];
        sumOfcumulativeAchievementIndexes += cumulativeAchievementIndexes[i];
    }
    cout << endl << "Average of Cumulative Achievement Index of 6 Persons is: " << sumOfcumulativeAchievementIndexes / 6 << "." << endl;
}