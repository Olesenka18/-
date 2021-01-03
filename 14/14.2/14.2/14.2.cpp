#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, i, j;
	printf("Введите число A \n");
	scanf("%i", &A);
	printf("Введите число B \n");
	scanf("%i", &B);
	while (A >= B) {
		A = A - B;
}
	printf("Длина незанятой части отрезка А равна %i", A);
	return 0;
}