#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    for (a = 1; a <= 10; a++)
    {
        cout << "* ";
    }
    cout << endl;

    for (b = 1; b <= 8; b++)
    {
        cout << "*";

        for (c = 1; c <= 17; c++)
        {
            cout << " ";
        }

        cout << "*";
        cout << endl;
    }

    for (a = 1; a <= 10; a++)
    {
        cout << "* ";
    }
    cout << endl;
}