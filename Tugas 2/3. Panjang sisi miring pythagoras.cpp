#include <stdio.h>
#include <math.h>
int main()
{
	float a = 4.0;
	float b = 5.0;
	float c = (a*a + b*b);
	float h = sqrt(c);
	
	printf("menghitung sisi miring dengan rumus pythagoras\n");
	printf("Rumus pythagoras: a^2 + b^2 = c^2\n");
	printf("panjang a: %2.f^2 cm\n", a);
	printf("panjang b: %2.f^2 cm\n", b);
	printf("maka panjang sisi miring (c): %2.f^2 cm\n", c);
	printf("akar dari 41 adalah %.2f cm", h);
	return 0;
}
