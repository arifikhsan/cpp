#include <iostream>
using namespace std;

int sum(int a = 10, int b = 20) {
    return a + b;
}

int main() {
    cout << sum(100, 200) << endl;
    cout << sum() << endl;
}