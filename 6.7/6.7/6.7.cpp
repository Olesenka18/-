#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	double A, B, K;
	printf("Введите значение A \n");
	scanf("%lf", &A);
	B = A * A;
	K = A * B;
	K = B * K;
	B = K * K;
	A = B * K;
	printf("A = %lf \n", A);
	return 0;

}
