#include <iostream>
using namespace std;

class Contoh
{
    // Variable Declaration
    int a, b;

  public:
    //Constructor
    Contoh()
    {
        // Memasukkan nilai di dalam Constructor
        a = 80;
        b = 90;
        cout << "Di dalam Constructor" << endl << endl;
    }

    void Display() // Fungsi dalam Constructor
    {
        cout << "Nilai a: " << a << endl;
        cout << "Nilai b: " << b << endl;
    }
};

int main()
{
    cout << "Menggunakan Constructor" << endl << endl;
    Contoh Objek; // Constructor dipanggil.
    Objek.Display(); // Memanggil fungsi dalam Constructor
}