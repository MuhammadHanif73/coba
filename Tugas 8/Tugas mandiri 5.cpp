#include <stdio.h>
#define SIZE 11

int main() {
    int A[SIZE] = {0};
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int E[11];
    int i, j = 0;

    for (i = 0; i < 11; i++) {
        if (data[i] == 999) break; 
        if (data[i] % 2 == 1) { 
            E[j++] = data[i];
        }
    }

    printf("Isi array E (bilangan ganjil):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", E[i]);
    }
    printf("\n");

    return 0;
}
