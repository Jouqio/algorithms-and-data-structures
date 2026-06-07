/* Program : modul_1_1.cpp
   Modul 1.1 Penerapan Array Satu Dimensi
   Menampilkan setiap elemen array dan total penjumlahannya */

#include <stdio.h>
#define SIZE 12

int main() {
    int a[SIZE] = {1, 3, 5, 2, 4, 7, 8, 88, 45, 61, 89, 45};
    int nomor, total;

    printf("Mencetak setiap elemen dari suatu array:\n");
    for (nomor = 0; nomor < SIZE; nomor++)
        printf("a[%d] = %d\n", nomor, a[nomor]);

    printf("\n");
    total = 0;
    for (int index = 0; index < SIZE; index++)
        total += a[index];

    printf("Total/jumlah semua elemen array adalah %d\n", total);
    return 0;
}
