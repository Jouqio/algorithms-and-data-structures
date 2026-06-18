/* SeqSearch_SudahUrut_Sentinel (cara 1)
   diasumsikan Array X[1..nmax] sudah ada dan indeks 1..n telah berisi data
   yang sudah terurut, nilai yang dicari adalah nilaiCari dan hanya ada satu */
#include <iostream>
using namespace std;

int main()
{
    int X[11] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, nilaiCari;
    bool found;

    cout << "nilai yang dicari = "; cin >> nilaiCari;
    X[10] = nilaiCari;
    found = false;
    i = 0;
    while((!found) & (X[i] < nilaiCari))
        i = i + 1;
    if(i > 9)
        cout << "tidak ada " << nilaiCari << " dalam Array" << endl;
    else
    {
        if(X[i] == nilaiCari)
            cout << nilaiCari << " ditemukan dalam Array pada index ke-" << i << endl;
        else
            cout << "tidak ada " << nilaiCari << " dalam Array" << endl;
    }
}