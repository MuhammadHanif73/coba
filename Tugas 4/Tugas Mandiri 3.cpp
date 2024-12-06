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
          printf("Hasil n yang telah dihitung: %d - 25 adalah %d \n", i,n);
          
    } else {
        n = n + 10;
          printf("Hasil n yang telah dihitung: %d + 10 adalah %d \n", i,n);
	}
  
   
    return 0;
}
