#include <iostream>
using namespace std;

int max(int nomorPertama, int nomorKedua); // Call by value

int main()
{
    int a = 200;
    int b = 100;

    cout << "Function call by value" << endl << endl;

    cout << "Nilai terbesar adalah: " << max(a, b) << endl;
}

int max(int angkaPertama, int angkaKedua)
{
    int angkaTerbesar;

    if (angkaPertama > angkaKedua)
        angkaTerbesar = angkaPertama;
    else
        angkaTerbesar = angkaKedua;

    return angkaTerbesar;
}