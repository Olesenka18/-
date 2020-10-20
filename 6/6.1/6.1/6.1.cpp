#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float A, B;
	float C;
	printf("Введите значение A \n");
	scanf("%f", &A);
	printf("Введите значение B \n");
	scanf("%f", &B);
	C = A;
	A = B;
	B = C;
	printf("A = %f \n", A);
	printf("B = %f \n", B);

	return 0;

}
