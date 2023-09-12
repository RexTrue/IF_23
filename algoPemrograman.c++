#include <iostream>

using namespace std;

#define MAX_LENGTH 100

int main()
{
    char nama[MAX_LENGTH] = {0};
    string nilai, kotaAsal, tanggalLahir;

    cout << "Isi data - data berikut" << endl;

    cout << "Nama : ";
    cin.getline(nama, MAX_LENGTH);
    cout << "nilai : ";
    cin >> nilai;
    cout << "Kota Asal : ";
    cin >> kotaAsal;
    cout << "tanggal lahir (dd/mm/yyyy): ";
    cin >> tanggalLahir;

    cout <<"Nama : " << nama << endl;
    cout <<"Nilai : " << nilai << endl;
    cout <<"Kota Asal : "<< kotaAsal  << endl;
    cout <<"Tanggal Lahir : " <<tanggalLahir << endl;
    return 0;
}
