#include <iostream>
#include <string>
#define MAX_LENGTH 100
using namespace std;

int main()
{
    char nama[MAX_LENGTH] = {0};
    string id;
    int waktu;

    cout << "Nama Lengkap\t:";
    cin.getline(nama, MAX_LENGTH);

    cout << "Id Member \t:";
    cin >> id;

    cout << "Waktu \t\t:" << waktu;
    cin >> waktu;

    int result = waktu * 5000;

    cout << "Nama \t\t: " << nama << endl;
    cout << "Id Pelanggan \t: " << id << endl;
    cout << "Harga \t\t: " << result << endl;
    return 0;
}