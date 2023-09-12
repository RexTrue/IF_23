#include <iostream>
#include <unistd.h>

using namespace std;

#define MAX_LENGTH 100

int main()
{
    char nama[MAX_LENGTH] = {0};
    string nilai, kotaAsal, tanggalLahir;

    cout << endl;
    cout << "Isi data - data berikut" << endl;
    cout << endl;

    cout << "Nama : ";
    cin.getline(nama, MAX_LENGTH);
    cout << "nilai : ";
    cin >> nilai;
    cout << "Kota Asal : ";
    cin >> kotaAsal;
    cout << "tanggal lahir (dd/mm/yyyy): ";
    cin >> tanggalLahir;
    cout << endl;

    cout << "Mohon Tunggu Sebentar..." << endl;
    sleep(2);
    cout << endl;

    cout << "Nama : " << nama << endl;
    cout << "Nilai : " << nilai << endl;
    cout << "Kota Asal : " << kotaAsal << endl;
    cout << "Tanggal Lahir : " << tanggalLahir << endl;
    cout << endl;

    cout << "Beasiswa anda telah berhasil di ajukan" << endl;
    return 0;
}
