#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaBekerja;

    // Input jam masuk
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);

    // Input jam keluar
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    // menghitung lama bekerja
    switch (jamMasuk) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            lamaBekerja = jamKeluar - jamMasuk;
            if (lamaBekerja < 0) {
                lamaBekerja = 12 + lamaBekerja;
            }
            //H Hasil Perhitungan
            printf("Lama bekerja: %d jam\n", lamaBekerja);
            break;
        default:
            printf("Jam masuk tidak valid.\n");
            break;
    }

    return 0;
}
