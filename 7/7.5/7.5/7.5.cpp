#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float A, x, B;
	printf("Введите значение A \n");
	scanf("%f", &A);
	printf("Введите значение B \n");
	scanf("%f", &B);
	x = -(B / A);
	printf("x = %lf \n", x);
	return 0;

}