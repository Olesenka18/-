#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, X;
	printf("Введите значение A \n");
	scanf("%i", &A);
	printf("Введите значение B \n");
	scanf("%i", &B);
	X = A / B;
	printf("Количество отрезков равно %i \n", X);
	return 0;
}
