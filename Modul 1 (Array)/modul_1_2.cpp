/* Program : modul_1_2.cpp
   Modul 1.2 Penerapan Array Satu Dimensi (Kuadrat)
   Menghitung dan menyimpan nilai kuadrat bilangan 0-9 ke dalam array */

#include <stdio.h>

int main() {
    int square[100];
    int i; /* loop index */
    int n; /* the integer */

    /* calculate the squares */
    for (i = 0; i < 10; i++) {
        n = i;
        square[i] = n * n;
    }

    for (i = 0; i < 10; i++)
        printf("Perangkat dari %d adalah %d\n", i, square[i]);

    return 0;
}
