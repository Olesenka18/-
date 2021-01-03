#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, K;
	printf("Введите A \n");
	scanf("%i", &A);
	printf("Введите B \n");
	scanf("%i", &B);
	while ((A != 0) && (B != 0)) {
		if (A > B) {
			A = A % B;
	}
		else {
			B = B % A;
		}
	}
	K = A + B;
	printf("НОД равен %i \n", K);
	return 0;
}