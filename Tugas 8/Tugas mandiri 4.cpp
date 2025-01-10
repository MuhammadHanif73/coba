#include <stdio.h>
#define SIZE 11

int main() {
    int A[SIZE] = {0};
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int D[11];
    int i, j = 0;

     for (i = 0; data[i] != 999; i++) { 
        if (data[i] % 2 == 1) {
            if (j < SIZE) { 
                D[j++] = data[i];
            }
        }
    }
    
    printf("Isi array D (bilangan ganjil):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", D[i]);
    }
    printf("\n");

    return 0;
}

