#include <stdio.h>
#define SIZE 11 

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int C[SIZE];
    int i, j = 0;

    for (i = 0; data[i] != 999; i++) { 
        if (data[i] > 9) {
            if (j < SIZE) { 
                C[j++] = data[i];
            }
        }
    }

    printf("Isi array C (data > 9):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

