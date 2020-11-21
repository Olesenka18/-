#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, X, P;
	printf("Введите значение A \n");
	scanf("%i", &A);
	printf("Введите значение B \n");
	scanf("%i", &B);
	X = A / B;
	P = A - B * X;
	printf("Длина незанятой части равна %i \n", P);
	return 0;
}