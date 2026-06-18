/* SeqSearch_BelumUrut_Sentinel (cara 2)
   diasumsikan Array X[0..10] sudah ada indeks ke 0..9 telah berisi data
   yang belum terurut, nilai yang dicari adalah y dan hanya ada satu,
   y diletakkan di index ke-10
*/
#include <iostream>
using namespace std;

int main()
{
    int X[11] = {20, 50, 10, 30, 90, 60, 70, 80, 40, 100};
    int i, nilaiCari;
    bool found;
    cout << "Nilai yang dicari = "; cin >> nilaiCari;
    X[10] = nilaiCari;
    found = false;
    i=0;
    while(!found)
    {
        if(X[i] == nilaiCari) found = true;
        else i = i + 1;
    }
    if(i == 10)
        cout << "tidak ada " << nilaiCari << " dalam Array" << endl;
    else
        cout << nilaiCari << " ditemukan dalam Array pada index ke-" << i << endl;
}