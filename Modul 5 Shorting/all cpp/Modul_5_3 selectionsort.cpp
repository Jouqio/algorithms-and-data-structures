// Modul 5.3 - Selection Sort
// Nama  : Syauqi Nuzul Abdi
// NIM   : 202512042
// Prodi : Teknik Informatika - STITEK Bontang

#include <iostream>
#include <stdlib.h>
using namespace std;

void selection_sort(int array[], int size)
{
    int temp, current, j;

    for(current=0; current<size; current++)
    {
        for(j=current+1; j<size; j++)
        {
            if(array[current] > array[j])
            {
                temp = array[current];
                array[current] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main()
{
    int data_size = 30;
    int values[30], i;

    // data yang diurutkan belum diambil dari hasil random
    cout << "data yang belum urut : " << endl;

    for(i=0; i<data_size; i++)
    {
        values[i] = rand() % 100;
        cout << values[i] << " ";
    }
    cout << endl;

    selection_sort(values, data_size);

    // data yang sudah diurutkan
    cout << "data yang sudah diurutkan : " << endl;
    for(i=0; i<data_size; i++)
        cout << values[i] << " ";

    getchar();
    return 0;
}