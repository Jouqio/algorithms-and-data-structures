/* Program : modul_1_3.cpp
   Modul 1.3 Program Array Dua Dimensi
   Mendeklarasikan dan menampilkan beberapa matriks 2x3 */

#include <stdio.h>

void printArray(int a[][3]);

int main() {
    int matriks1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matriks2[2][3] = {1, 2, 3, 4, 5};
    int matriks3[2][3] = {{1, 2, 0}, {4}};

    printf("Matriks 1:\n");
    printArray(matriks1);

    printf("Matriks 2:\n");
    printArray(matriks2);

    printf("Matriks 3:\n");
    printArray(matriks3);

    return 0;
}

void printArray(int a[][3]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n");
}
