#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, S, p, a, b;
	printf("Введите координату x1 \n x1 = ");
	 scanf("%f", &x1);
	printf("Введите координату y1 \n y1 = ");
	 scanf("%f", &y1);
	printf("Введите координату x2 \n x2 = ");
	 scanf("%f", &x2);
	printf("Введите координату y2 \n y2 = ");
	 scanf("%f", &y2);
	a = fabsf(x2 - x1);
	b = fabsf(y2 - y1);
	p = 2 * (a + b);
	S = a * b;
	printf("p = %f \n", p);
	printf("S = %f \n", S);
	return 0;

}