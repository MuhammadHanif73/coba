#include <stdio.h>

int main() 
{
    // Deklarasi variabel
    int bilangan;

    // Input bilangan
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);
   
	// Memeriksa apakah bilangan genap atau ganjil
    if (bilangan % 2 == 0) {
        printf("\nBilangan Genap");
	} else if (bilangan < 0) {
		printf("\nBilangan lebih kecil dari nol (Negatif)");
    } else {
        printf("\nBilangan Ganjil");  
    }

    return 0;
}
