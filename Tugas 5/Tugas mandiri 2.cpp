#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, diskon, hargaSetelahDiskon;

    printf("Masukkan kode barang: ");
    scanf("%d", &kode);

    printf("Masukkan jenis barang (A, B, atau C): ");
    scanf(" %c", &jenis);

    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10; 
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20; 
            break;
        default:
            printf("Jenis barang tidak valid.\n");
            return 1;
    }

    // Perhitungan harga setelah diskon
    hargaSetelahDiskon = harga - (harga * diskon);

    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.0f\n", jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}
