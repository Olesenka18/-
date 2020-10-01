#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float A, B, C, AB, BC;
	printf("Введите точку A \n A = ");
	scanf("%f", &A);
	printf("Введите точку B \n B = ");
	scanf("%f", &B);
	printf("Введите точку C \n C = ");
	scanf("%f", &C);
	AB = fabsf(A - B);
	BC = fabsf(B - C);
	printf("AB = %f ", AB);
	printf("BC = %f ", BC);

	return 0;

}