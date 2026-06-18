/* Tugas 2 - Binary Search dengan Penyisipan Data
   Jika data tidak ditemukan, tentukan posisi penyisipan,
   sisipkan data ke array, dan tampilkan array baru yang terurut
*/
#include <iostream>
using namespace std;

int main() {
    int X[11] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int nilaiCari;
    int i, j, k;
    bool found;

    cout << "Array awal: ";
    for(int idx = 0; idx < n; idx++) {
        cout << X[idx];
        if(idx < n-1) cout << ", ";
    }
    cout << endl;

    cout << "nilai yang dicari = ";
    cin >> nilaiCari;

    found = false;
    i = 0;
    j = n - 1;

    while((!found) & (i <= j)) {
        k = (i + j) / 2;
        if(nilaiCari == X[k])
            found = true;
        else {
            if(nilaiCari < X[k])
                j = k - 1;
            else
                i = k + 1;
        }
    }

    if(found) {
        cout << nilaiCari << " ditemukan dalam Array pada index ke-" << k << endl;
    } else {
        cout << nilaiCari << " tidak ditemukan dalam Array." << endl;

        int posisi = i;
        cout << "Posisi penyisipan: index ke-" << posisi << endl;

        for(int idx = n; idx > posisi; idx--) {
            X[idx] = X[idx-1];
        }
        X[posisi] = nilaiCari;
        n++;

        cout << "Array baru setelah penyisipan: ";
        for(int idx = 0; idx < n; idx++) {
            cout << X[idx];
            if(idx < n-1) cout << ", ";
        }
        cout << endl;
    }

    return 0;
}