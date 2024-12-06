#include <stdio.h>

int main() {
    // Deklarasi variabel
    int n,i;

    // Input nilai n
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    i = n;
    
    if (n > 50) {
        n = n - 25;
          // Perintah Pertama
          printf("Hasil n setelah dijumlahkan : %d - 25 adalah %d \n", i,n);
          
    } else if (n < 50) {
        n = n + 10;
          // Perintah Kedua
          printf("Hasil n setelah dijumlahkan : %d + 10 adalah %d \n", i,n);
    }

  
   
    return 0;
}
