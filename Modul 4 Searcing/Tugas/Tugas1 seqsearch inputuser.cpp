/* Tugas 1 - Modifikasi SeqSearch_BelumUrut_nonSentinel
   Program Sequential Search dengan jumlah data, elemen array,
   dan nilai yang dicari diinput oleh user
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int X[100];
    cout << "Masukkan " << n << " elemen array:" << endl;
    for(int idx = 0; idx < n; idx++) {
        cout << "Data ke-" << idx << ": ";
        cin >> X[idx];
    }

    int nilaiCari;
    cout << "Nilai yang dicari = ";
    cin >> nilaiCari;

    bool found = false;
    int i = 0;

    while((i < n) & (!found)) {
        if(X[i] == nilaiCari)
            found = true;
        else
            i = i + 1;
    }

    if(found)
        cout << nilaiCari << " ditemukan pada index array ke-" << i << endl;
    else
        cout << nilaiCari << " tidak ada dalam Array tersebut" << endl;

    return 0;
}