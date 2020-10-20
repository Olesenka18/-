#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	double A, B;
	printf("Введите значение A \n");
	scanf("%lf", &A);
	B = A * A;
	A = B * B;
	A = A * A;
	printf("A = %lf \n", A);
	return 0;

}
