#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, X, P;
	printf("Введите двузначное число A \n");
	scanf("%i", &A);
	X = A / 10;
	P = A % 10;
	B = P * 10 + X;
	printf("Число, полученное при перестановке цифр, равно %i \n", B);
	return 0;
}
