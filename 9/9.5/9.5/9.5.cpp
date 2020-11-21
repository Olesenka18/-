#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, N;
	printf("Введите год \n A = ");
	scanf("%i", &A);
	N = ((A - 1) / 100) + 1;
	printf("N = %i \n", N);
	return 0;

}