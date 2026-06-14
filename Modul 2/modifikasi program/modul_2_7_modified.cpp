#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    typedef struct {
        char nomhs[12];
        char nama[20];
        float nilai;
    } data_nilai;

    data_nilai nilaimhs[10];

    int i;
    for (i = 1; i <= 2; i++)
    {
        cout << "Nomhs  : ";
        cin >> nilaimhs[i].nomhs;

        cin.ignore(); // Membersihkan newline sisa dari cin >>

        cout << "Nama   : ";
        cin.getline(nilaimhs[i].nama, 20); // Menerima input nama dengan spasi

        cout << "Nilai  : ";
        cin >> nilaimhs[i].nilai;

        cout << endl;
    }

    for (i = 1; i <= 2; i++)
    {
        cout << "Nama   : " << nilaimhs[i].nama  << endl;
        cout << "Nomhs  : " << nilaimhs[i].nomhs << endl;
        cout << "Nilai  : " << nilaimhs[i].nilai << endl;
        cout << endl;
    }

    return 0;
}