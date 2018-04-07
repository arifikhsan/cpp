#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int besar_kotak;

    cout << "Besarnya berapa: "; cin >> besar_kotak;

    for (int i = 1; i <= besar_kotak; i++)
    {
        cout << "* ";
    }

    for (int k = 1; k <= besar_kotak - 2; k++)
    {
        cout << "* ";
        for (int l = 1; l <= (besar_kotak - 2) * 2; l++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    for (int j = 1; j <= besar_kotak; j++)
    {
        cout << "* ";
    }

    cout << endl;
    

}