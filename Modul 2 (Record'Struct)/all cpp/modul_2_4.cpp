#include <iostream>
#include <string.h>
using namespace std;

struct mahasiswa
{
    char nama[30];
    char nim[15];
    float ipk;
};

void isi_data(struct mahasiswa *mhs);
void tampil_data(struct mahasiswa mhs);

int main()
{
    struct mahasiswa data;
    isi_data(&data);
    tampil_data(data);
    return 0;
}

void isi_data(struct mahasiswa *mhs)
{
    cout << "Nama : "; cin >> mhs->nama;
    cout << "NIM  : "; cin >> mhs->nim;
    cout << "IPK  : "; cin >> mhs->ipk;
}

void tampil_data(struct mahasiswa mhs)
{
    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "NIM  : " << mhs.nim  << endl;
    cout << "IPK  : " << mhs.ipk  << endl;
}