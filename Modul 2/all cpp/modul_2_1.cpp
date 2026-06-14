#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    typedef struct {
        char no_pendaftaran[9];
        char nama_pasien[16];
        float biaya;
    } data_pasien;

    data_pasien pasien;
    cout << "No Pendaftaran : ";
    cin >> pasien.no_pendaftaran;
    cout << "Nama           : ";
    cin >> pasien.nama_pasien;
    cout << "Biaya          : ";
    cin >> pasien.biaya;

    cout << "\nNo Pendaftaran : " << pasien.no_pendaftaran << endl;
    cout << "Nama           : " << pasien.nama_pasien << endl;
    cout << "Biaya          : " << pasien.biaya << endl;
    return 0;
}