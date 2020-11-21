#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, C, D, F, K;
	printf("Введите четырёхзначное число A \n");
	scanf("%i", &A);
	B = A / 100;
	C = A % 100;
	D = C / 10;
	F = C % 10;
	K = F * 10 + D;
	if (B==K) {
		printf("Истина");
	}
	else {
		printf("Ложь");
	}

	return 0;

}