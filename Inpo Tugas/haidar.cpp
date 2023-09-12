#include <iostream>
#include <string>
#include <unistd.h>
#define MAX_LENGTH 100
using namespace std;

int main()
{
    char nama[MAX_LENGTH] = {0};
    string id;
    int waktu;

    cout << "Nama Lengkap\t:";
    cin.getline(nama, MAX_LENGTH);

    cout << "Waktu \t\t:" << waktu;
    cin >> waktu;

    int result = waktu * 5000;

    cout << "SELAMAT PEMBELIAN PAKET TELAH BERHASIL!!" << endl;
    cout << "GUNAKAN ID DI BAWAH INI UNTUK LOGIN" << endl;
    cout << "Loading...n " << endl;
    sleep(3);

    cout << "Nama \t\t: " << nama << endl;
    cout << "Id Pelanggan \t: " << nama << waktu << endl;
    cout << "Harga \t\t: " << "Rp." << result << endl;
    return 0;
}