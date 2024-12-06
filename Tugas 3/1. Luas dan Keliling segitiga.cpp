#include <stdio.h>

int main()
{
	
	// Deklarasi variabel
	float sisi_alas, tinggi, luas, keliling;
	
	//input panjang sisi alas segitiga (cm)
	printf("Masukan panjang sisi alas segitiga (cm): ");
	scanf("%f", &sisi_alas);
	
	//input tinggi segitiga (cm)
	printf("Masukan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	//menghitung luas segitiga
	luas = 0.5 * sisi_alas * tinggi;
	
	//menghitung keliling segitiga
	keliling = 3 * sisi_alas;
	
	//menampilkan hasil
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("Keliling segitiga: %.2f cm^2\n", keliling);
	
	return 0; 
}
