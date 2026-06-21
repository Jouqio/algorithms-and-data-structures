// Tugas - Program Menu Sorting (50 Data Random)
// Nama  : Syauqi Nuzul Abdi
// NIM   : 202512042
// Prodi : Teknik Informatika - STITEK Bontang

#include <iostream>
#include <stdlib.h>
#include <ctime>
#define N 50
using namespace std;

// ── Bubble Sort ───────────────────────────────────────────────────────────────
void bubble_sort(int a[], int n)
{
    int temp, i, j;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1-i; j++)
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
}

// ── Insertion Sort ────────────────────────────────────────────────────────────
void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for(i=1; i<n; i++) {
        temp = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > temp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

// ── Selection Sort ────────────────────────────────────────────────────────────
void selection_sort(int a[], int n)
{
    int i, j, min_idx, temp;
    for(i=0; i<n-1; i++) {
        min_idx = i;
        for(j=i+1; j<n; j++)
            if(a[j] < a[min_idx]) min_idx = j;
        temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }
}

// ── Shell Sort ────────────────────────────────────────────────────────────────
void shell_sort(int a[], int n)
{
    int gap, i, j, temp;
    for(gap = n/2; gap > 0; gap /= 2)
        for(i = gap; i < n; i++) {
            temp = a[i];
            for(j = i; j >= gap && a[j-gap] > temp; j -= gap)
                a[j] = a[j-gap];
            a[j] = temp;
        }
}

// ── Quick Sort ────────────────────────────────────────────────────────────────
void quick_sort(int a[], int first, int last)
{
    int low = first, high = last;
    int pivot = a[(first + last) / 2];
    int temp;

    do {
        while(a[low] < pivot)  low++;
        while(a[high] > pivot) high--;
        if(low <= high) {
            temp = a[low];
            a[low++] = a[high];
            a[high--] = temp;
        }
    } while(low <= high);

    if(first < high) quick_sort(a, first, high);
    if(low < last)   quick_sort(a, low, last);
}

// ── Tampilkan array ───────────────────────────────────────────────────────────
void tampilkan(int a[], int n)
{
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}

// ── Main ──────────────────────────────────────────────────────────────────────
int main()
{
    srand(time(0));
    char lagi;

    do {
        int data[N], tmp[N];

        // Bangkitkan 50 data random
        for(int i=0; i<N; i++)
            data[i] = rand() % 100 + 1;

        cout << "\n50 Data Acak Yang Akan Diurutkan :\n";
        tampilkan(data, N);

        int pilihan;
        cout << "\nMenu Pilihan :\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Insertion Sort\n";
        cout << "3. Selection Sort\n";
        cout << "4. Shell Sort\n";
        cout << "5. Quick Sort\n";
        cout << "Pilihan : ";
        cin >> pilihan;

        // Salin data ke tmp sebelum sort agar data asli tetap terjaga
        for(int i=0; i<N; i++) tmp[i] = data[i];

        switch(pilihan) {
            case 1:
                cout << "\nBubble Sort\n";
                bubble_sort(tmp, N);
                break;
            case 2:
                cout << "\nInsertion Sort\n";
                insertion_sort(tmp, N);
                break;
            case 3:
                cout << "\nSelection Sort\n";
                selection_sort(tmp, N);
                break;
            case 4:
                cout << "\nShell Sort\n";
                shell_sort(tmp, N);
                break;
            case 5:
                cout << "\nQuick Sort\n";
                quick_sort(tmp, 0, N-1);
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                continue;
        }

        cout << "50 Data Acak Yang Telah Diurutkan :\n";
        tampilkan(tmp, N);

        cout << "Lagi (y/t) ? ";
        cin >> lagi;

    } while(lagi == 'y' || lagi == 'Y');

    return 0;
}