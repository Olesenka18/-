#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float A1, B1, A2, B2, C1, C2, x, y;
	printf("Введите значение A1 \n");
	scanf("%f", &A1);
	printf("Введите значение B1 \n");
	scanf("%f", &B1);
	printf("Введите значение A2 \n");
	scanf("%f", &A2);
	printf("Введите значение B2 \n");
	scanf("%f", &B2);
	printf("Введите значение C1 \n");
	scanf("%f", &C1);
	printf("Введите значение C2 \n");
	scanf("%f", &C2);
	x = (B1 * C2 - B2 * C1) / (A2 * B1 - A1 * B2);
	y = (A1 * C2 - A2 * C1) / (A1 * B2 - A2 * B1);
	printf("x = %f \n", x);
	printf("y = %f \n", y);
	return 0;

}