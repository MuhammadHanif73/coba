#include <stdio.h>
#define SIZE 11

int main() {
    int A[SIZE] = {0};
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int B[11];
    int i, j = 0;

    for (i = 0; i < 11; i++) {
        if (data[i] == 999) break; 
        if (data[i] > 9) {
            B[j++] = data[i];
        }
    }

    printf("Isi array B (data > 9):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

