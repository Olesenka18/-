#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, C, D;
	printf("Введите трёхзначное число A \n");
	scanf("%i", &A);
	B = A / 100;
	C = A % 10;
	D = (A / 10) % 10;
	if (((B < D) && (D < C)) ^ ((B > D) && (D > C))) {
		printf("Истина");
	}
	else {
		printf("Ложь");
	}

	return 0;

}