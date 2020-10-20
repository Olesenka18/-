#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float A, B, C, AC, BC, S;
	printf("Введите точку A \n A = ");
	scanf("%f", &A);
	printf("Введите точку B \n B = ");
	scanf("%f", &B);
	printf("Введите точку C \n C = ");
	scanf("%f", &C);
	AC = fabsf(A - C);
	BC = fabsf(B - C);
	S = AC + BC;
	printf("AC = %f ", AC);
	printf("BC = %f ", BC);
	printf("S = %f ", S);
	
	return 0;

}