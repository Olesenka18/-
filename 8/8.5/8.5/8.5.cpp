#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, X, P;
	printf("Введите трёхзначное число A \n");
	scanf("%i", &A);
	X = A / 100;
	P = A % 100;
	B = P * 10 + X;
	printf("Полученное число равно %i \n", B);
	return 0;
}