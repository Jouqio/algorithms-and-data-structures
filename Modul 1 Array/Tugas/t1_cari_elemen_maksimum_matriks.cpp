// Program mencari elemen maksimum dari matriks dua dimensi
// Penelusuran dari MAT[1][1] sampai MAT[MaksBaris][MaksKolom]

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i, j, MaksBaris, MaksKolom;
    int MAT[10][10];
    int maks, posBaris, posKolom;

    // =============================================
    // Input ukuran matriks dari user
    // =============================================
    cout << "=== Tentukan Ukuran Matriks ===" << endl;
    cout << "Jumlah baris  (maks 10) : ";
    cin >> MaksBaris;
    cout << "Jumlah kolom  (maks 10) : ";
    cin >> MaksKolom;

    // Validasi input
    if (MaksBaris < 1 || MaksBaris > 10 || MaksKolom < 1 || MaksKolom > 10)
    {
        cout << "Ukuran tidak valid! Baris dan kolom harus antara 1 - 10." << endl;
        return 1;
    }

    // =============================================
    // Input elemen matriks
    // =============================================
    cout << "\nInput elemen Matriks : \n";
    for (i = 0; i < MaksBaris; i++)
    {
        for (j = 0; j < MaksKolom; j++)
        {
            cout << "MAT[" << i + 1 << "][" << j + 1 << "] = ";
            fflush(stdin); cin >> MAT[i][j];
        }
        cout << endl;
    }

    // =============================================
    // Tampilkan isi matriks
    // =============================================
    cout << "Isi Matriks (" << MaksBaris << "x" << MaksKolom << ") :\n";
    for (i = 0; i < MaksBaris; i++)
    {
        for (j = 0; j < MaksKolom; j++)
            cout << "\t" << MAT[i][j];
        cout << endl;
    }

    // =============================================
    // Cari elemen maksimum
    // Mulai dari MAT[1][1] → index [0][0]
    // sampai MAT[MaksBaris][MaksKolom]
    // =============================================
    maks    = MAT[0][0]; // asumsikan elemen pertama sebagai maks awal
    posBaris = 0;
    posKolom = 0;

    for (i = 0; i < MaksBaris; i++)
    {
        for (j = 0; j < MaksKolom; j++)
        {
            if (MAT[i][j] > maks)
            {
                maks     = MAT[i][j];
                posBaris = i;
                posKolom = j;
            }
        }
    }

    // =============================================
    // Tampilkan hasil elemen maksimum
    // =============================================
    cout << "\n=== Elemen Maksimum ===" << endl;
    cout << "Nilai maksimum : " << maks << endl;
    cout << "Posisi         : MAT[" << posBaris + 1 << "][" << posKolom + 1 << "]" << endl;

    return 0;
}
