#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biayaParkir;

    // Input jam masuk
    printf("Jam masuk: ");
    scanf("%d", &jamMasuk);

    // Input jam keluar
    printf("Jam keluar: ");
    scanf("%d", &jamKeluar);

    // Menghitung lama parkir
    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }

    switch (lamaParkir) {
        case 0:
        case 1:
            biayaParkir = 2000;
            break;
        default:
            biayaParkir = 2000 + (lamaParkir - 2) * 500;
            break;
    }

    printf("Lama parkir: %d jam\n", lamaParkir);
    printf("Biaya parkir: %d\n", biayaParkir);

    return 0;
}
