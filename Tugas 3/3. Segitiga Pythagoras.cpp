#include <stdio.h>
#include <math.h>
int main()
{
	//Deklarasi variabel
	float alas, tinggi, sisi_miring;
	
	//input alas
	printf("Masukan Panjang sisi alas segitiga (cm): ");
	scanf("%f", &alas);
	
	//input tinggi
	printf("Masukan Tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	//menghitung panjang sisi miring segitiga (hipotenusa)
	sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	
	//menghitung hasil
	printf("Panjang sisi miring segitiga (Hipotenusa) adalah = %.2f cm\n", sisi_miring);
	
	return 0; 
}
