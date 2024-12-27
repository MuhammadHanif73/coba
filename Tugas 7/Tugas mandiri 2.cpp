#include <stdio.h>

int main() {
    // Deklarasi array
    int A[11];

    // Data dari dokumen
    int dataDokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    // input data dari dokumen
    int indexA = 0;
    int i;
    for ( i = 0; i < 11; ++i) {
        
        if (dataDokumen[i] % 2 == 0) {
            A[indexA] = dataDokumen[i];
            indexA++;
        }
    }

    printf("Isi array A setelah input nilai genap:\n\n");
    int i2;
    for ( i2 = 0; i2 < indexA; ++i2) {
        printf("A[%d]=%d ", i2, A[i2]);
    }

    return 0;
}
