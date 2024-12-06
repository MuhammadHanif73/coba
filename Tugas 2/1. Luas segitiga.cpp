#include <stdio.h>

int main()
{		
	float alas = 8.0;
	float tinggi = 5.0;
	float luas = 0.5 * alas * tinggi;
	
	printf("Menghitung luas segitiga\n");
	printf("alas: %2.f cm, ", alas);
	printf("Tinggi: %2.f cm\n", tinggi);
	printf("Rumus Luas segitiga: 1/2 x alas x tinggi\n");
	printf("hasil Luasnya: %2.f cm^2", luas);

	return 0;
}
