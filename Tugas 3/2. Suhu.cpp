#include <stdio.h>

int main()
{
	// Deklarasi variabel
	float celcius, fahrenheit, reamur;
	
	// input suhu celcius
	printf("Masukan suhu Celcius (C): ");
	scanf("%f", &celcius);
	
	//menghitung suhu celcius kedalam fahrenheit
	fahrenheit = celcius * (9.0 / 5.0) + 32;
	
	//menghitung suhu celcius kedalam reamur
	reamur = celcius * (4.0 / 5.0);
	
	//menghitung hasil
	printf("%.2f derajat celcius sama dengan %.2f derajat Fahrenheit\n", celcius, fahrenheit);
	printf("%.2f derajat celcius sama dengan %.2f derajat Reamur\n", celcius, reamur);
	
	return 0;
}
