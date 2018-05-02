#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[20];
    cout << "Nama: "; cin.getline(name, 20);

    for (int i = 0; i < strlen(name); i++)
    {
        if ((name[i]) == 'a') {
            cout << '@';
        } else if ((name[i] == 'b')) {
            cout << '6';
        } else {
            cout << name[i];
        }
    }

    cout << endl;
}