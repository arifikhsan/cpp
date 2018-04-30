#include <iostream>
using namespace std;

void tukar(int &x, int &y); // Call by reference

int main()
{
    int a = 100;
    int b = 200;

    cout << "Function call by reference" << endl << endl;

    cout << "Sebelum ditukar, nilai a adalah: " << a << endl;
    cout << "Sebelum ditukar, nilai b adalah: " << b << endl;

    tukar(a, b);
    cout << endl;

    cout << "Setelah ditukar, nilai a adalah: " << a << endl;
    cout << "Setelah ditukar, nilai b adalah: " << b << endl;
}

void tukar(int &x, int &y)
{
    int sementara;
    sementara = x;
    x = y;
    y = sementara;
}