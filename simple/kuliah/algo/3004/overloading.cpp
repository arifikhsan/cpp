#include <iostream>
using namespace std;

class CetakTulisan
{
  public:
    void cetak(int i) // Void karena fungsi ini tidak mengembalikan nilai apapun
    {
        cout << "Mencetak integer: " << i << endl;
    }
    void cetak(double f)
    {
        cout << "Mencetak float: " << f << endl;
    }
    void cetak(string s)
    {
        cout << "Mencetak string: " << s << endl;
    }
};

int main()
{
    CetakTulisan pd;

    // Memanggil fungsi cetak dalam Contructor Cetak tulisan untuk mencetak integer
    pd.cetak(5);

    // Memanggil fungsi cetak dalam Contructor Cetak tulisan untuk mencetak float
    pd.cetak(500.263);

    // Memanggil fungsi cetak dalam Contructor Cetak tulisan untuk mencetak character
    pd.cetak("Hello C++");

}