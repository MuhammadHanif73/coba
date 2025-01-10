#include <stdio.h>
#include <unistd.h>

int ketebalan[] = {6, 8, 12, 24, 30, 36, 42, 49, 50};
int jumlah_ketebalan = sizeof(ketebalan) / sizeof(ketebalan[0]);

int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int jumlah_waktu = sizeof(waktu) / sizeof(waktu[0]);


int nilai_tengah(int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2;
    } else {
        return arr[n / 2];
    }
}



int main() {
    printf("Selamat datang di program pengelasan robot!\n");

    printf("Tombol Start ditekan. Motor listrik utama berputar 180 derajat.\n");

    int i;

    for (i = 0; i < jumlah_ketebalan; i++) {        
        int nilai_tengah_ketebalan = nilai_tengah(ketebalan, jumlah_ketebalan);

        printf("Motor listrik utama berpindah ke nilai tengah %d.\n", nilai_tengah_ketebalan);

        printf("Motor listrik lengan tungkai aktif. Berputar 45 derajat.\n");

        printf("Motor listrik jari robot mendekati objek.\n");

        printf("Proses pengelasan dengan ketebalan %d mm selama %d detik.\n", ketebalan[i], waktu[i]);

        printf("Proses pengelasan selesai. Kembali ke langkah 3.\n\n");
        sleep(2);
    }
    


    printf("Semua proses pengelasan selesai. Program berakhir.\n");

    return 0;
}
