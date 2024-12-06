# include <stdio.h>

int main()
{
	// Deklarasi Variabel
	int bilangan;
	
	//input bilangan bulat
	printf("Masukan bilangan bulat positif: ");
	scanf("%d", &bilangan);
	
	// Memilih bilangan bulat ganjil atau genap
	if (bilangan % 2 == 0) {
		printf("Bilangan Genap\n"); }
	else {
		printf("Bilangan Ganjil\n");
	}
	return 0;
}
