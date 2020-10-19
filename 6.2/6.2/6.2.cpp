#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float A, B, C, D;
	printf("Введите значение A \n");
	scanf("%f", &A);
	printf("Введите значение B \n");
	scanf("%f", &B);
	printf("Введите значение C \n");
	scanf("%f", &C);
	D = A;
	A = B;
	B = D;

	D = A;
	A = C;
	C = D;
	printf("A = %f \n", A);
	printf("B = %f \n", B);
	printf("C = %f \n", C);
	return 0;

}
