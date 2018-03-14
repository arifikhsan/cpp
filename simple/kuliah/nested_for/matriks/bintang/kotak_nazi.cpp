#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    for (a = 1; a <= 9; a++)
    {
        cout << "* ";
    }
    cout << endl;

    for (b = 1; b <= 7; b++)
    {
        cout << "*";
        if (b == 4)
        {
            for (d = 1; d <= 7; d++)
            {
                cout << " *";
            }
            cout << " ";
        }
        else
        {
            for (c = 1; c <= 15; c++)
            {
                if (c == 8)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << "*";
        cout << endl;
    }

    for (a = 1; a <= 9; a++)
    {
        cout << "* ";
    }
    cout << endl;
}
