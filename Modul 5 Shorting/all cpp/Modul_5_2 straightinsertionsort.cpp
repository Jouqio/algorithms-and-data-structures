// Modul 5.2 - Straight Insertion Sort
// Nama  : Syauqi Nuzul Abdi
// NIM   : 202512042
// Prodi : Teknik Informatika - STITEK Bontang

#include <iostream>
using namespace std;

void straight_inst_sort(int array[], int size)
{
    int i, j, k;
    int Temp;

    for(i=1; i<size; i++) {
        Temp = array[i];
        j = i - 1;
        while((Temp < array[j]) & (j >= 0))
        {
            array[j+1] = array[j];
            j = j - 1;
            array[j+1] = Temp;
        }
    }
}

int main()
{
    int k, data_size;
    int values[20];
    cout << "banyaknya data = "; cin >> data_size;  // tidak > 20

    // masukkan data sebanyak n
    for(k=0; k<data_size; k++)
    {
        cout << "values[" << k << "] = ";
        cin >> values[k];
    }

    // data yang belum diurutkan
    cout << "data yang belum diurutkan : " << endl;
    for(k=0; k<data_size; k++)
        cout << values[k] << " ";
    cout << endl;

    straight_inst_sort(values, data_size);

    // data yang telah diurutkan
    cout << "data yang sudah diurutkan : " << endl;
    for(k=0; k<data_size; k++)
        cout << values[k] << " ";

    getchar();
    return 0;
}