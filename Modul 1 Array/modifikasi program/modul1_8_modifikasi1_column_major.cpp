/* Modifikasi Modul 1.4 - Program menginput nilai (bilangan) ke dalam
   array dimensi dua dan menampilkannya secara Column Major Order */

#include <iostream>
using namespace std;

int main()
{
    int baris, kolom, matriks[3][4];

    // Input elemen array secara Column Major Order
    // (loop luar = kolom, loop dalam = baris)
    cout << "Input elemen Array (Column Major Order) : \n";
    for (kolom = 0; kolom < 4; kolom++)
    {
        for (baris = 0; baris < 3; baris++)
        {
            cout << "matriks[" << baris + 1 << "][" << kolom + 1 << "] = ";
            cin >> matriks[baris][kolom];
        }
        cout << endl;
    }

    // Tampilkan elemen Array secara Column Major Order
    // (loop luar = kolom, loop dalam = baris)
    cout << "Isi array (Column Major Order) : \n";
    for (kolom = 0; kolom < 4; kolom++)
    {
        for (baris = 0; baris < 3; baris++)
            cout << " " << matriks[baris][kolom];
        cout << endl;
    }

    return 0;
}
