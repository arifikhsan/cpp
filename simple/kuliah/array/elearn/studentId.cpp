//
//   Original code by Arif Ikhsanudin and Rizqie Miftakhudin Noor
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    char studentIdNumber[10];
    int facultyId;
    string year;
    string facultyName;

    cout << "=== Student Id Number Detector ===" << endl;
    cout << "Please enter your student id: "; cin.getline(studentIdNumber, 10);

    facultyId = studentIdNumber[0] - '0';
    int a = studentIdNumber[1] - '0';
    int b = studentIdNumber[2] - '0';
    year = to_string(a) + to_string(b);

    switch (facultyId) {
    case 1:
        facultyName = "FST";
        break;
    case 2:
        facultyName = "FIB";
        break;
    case 3:
        facultyName = "FEB";
        break;
    case 4:
        facultyName = "FHum";
        break;
    case 5:
        facultyName = "FTIE";
        break;
    default:
        facultyName = "Unnamed";
    }
    
    cout << "Anda adalah mahasiswa UTY fakultas " << facultyName << " angkatan tahun 20" << year << "." << endl;
}