/* Program : tugas_2.cpp
   Tugas 2 – Transpose Matriks
   Mengubah matriks ordo m x n menjadi matriks ordo n x m
   dengan menukar posisi baris dan kolom (T[j][i] = A[i][j]) */

#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Masukkan jumlah baris (m) : "; cin >> m;
    cout << "Masukkan jumlah kolom (n) : "; cin >> n;

    int A[m][n];
    int T[n][m];

    // Input matriks asli
    cout << "\nInput matriks " << m << "x" << n << " :" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> A[i][j];
        }

    // Tampilkan matriks asli
    cout << "\nMatriks A (" << m << "x" << n << ") :" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << "\t" << A[i][j];
        cout << endl;
    }

    // Proses transpose: T[j][i] = A[i][j]
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            T[j][i] = A[i][j];

    // Tampilkan matriks hasil transpose
    cout << "\nMatriks Transpose T (" << n << "x" << m << ") :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << "\t" << T[i][j];
        cout << endl;
    }

    return 0;
}
