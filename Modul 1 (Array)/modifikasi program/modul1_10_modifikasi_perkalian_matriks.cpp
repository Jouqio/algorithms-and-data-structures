// Program perkalian matriks dua dimensi
// A[3][4] x B[4][3] = C[3][3]
// Syarat: kolom A (4) == baris B (4)

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A[3][4], B[4][3], C[3][3], i, j, k;

    // =============================================
    // Masukkan matriks A (3 baris x 4 kolom)
    // =============================================
    cout << "=== Input Matriks A (3x4) ===" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "input data matrik A[" << i + 1 << "][" << j + 1 << "] : ";
            fflush(stdin); cin >> A[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // =============================================
    // Masukkan matriks B (4 baris x 3 kolom)
    // =============================================
    cout << "=== Input Matriks B (4x3) ===" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "input data matrik B[" << i + 1 << "][" << j + 1 << "] : ";
            fflush(stdin); cin >> B[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // =============================================
    // Hitung perkalian matriks C = A x B
    // C[i][j] = jumlah dari A[i][k] * B[k][j]
    // =============================================
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0; // inisialisasi elemen C
            for (k = 0; k < 4; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // =============================================
    // Cetak isi matriks A
    // =============================================
    cout << "\n Matriks A (3x4) \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << "\t" << A[i][j];
        cout << endl;
    }
    cout << endl;

    // =============================================
    // Cetak isi matriks B
    // =============================================
    cout << "\n Matriks B (4x3) \n";
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            cout << "\t" << B[i][j];
        cout << endl;
    }
    cout << endl;

    // =============================================
    // Cetak hasil perkalian matriks C = A x B
    // =============================================
    cout << "\n Matriks perkalian A x B (3x3) \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << "\t" << C[i][j];
        cout << endl;
    }
    cout << endl;

    return 0;
}
