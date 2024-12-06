#include <stdio.h>

int main()
{
	float diameter = 15.0;
	float r = diameter/2;
	float volume = (4.0 / 3.0) * 3.14 * (r*r*r);
	
	printf("Menghitung volume bola\n");
	printf("Rumus Menghitung volume bola: 4/3 x 3,14 x r^3\n");
	printf("Diameter bola: %2.f cm\n", diameter);
	printf("Jari-Jari bola: %.1f cm\n", r);
	printf("Volume bola: %.2f cm^3\n", volume);
	
	return 0;
}
