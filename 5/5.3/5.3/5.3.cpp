#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float A, B, C, AC, BC, P;
	printf("Введите точку A \n A = ");
	scanf("%f", &A);
	printf("Введите точку B \n B = ");
	scanf("%f", &B);
	printf("Введите точку C \n C = ");
	scanf("%f", &C);
	if ((A < C) && (C < B)) {
		AC = C - A;
		BC = B - C;
	}
	if ((B < C) && (C < A)) {
		AC = A - C;
		BC = C - B;
	}
	P = AC * BC;
	printf("P = %f ", P);

	return 0;

}