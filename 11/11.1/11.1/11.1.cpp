#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B;
	printf("Введите значение A \n");
	scanf("%i", &A);
	printf("Введите значение B \n");
	scanf("%i", &B);
	if (A == B) {
		A = 0;
		B = 0;
	}
	else {
		if (A > B) {
			B = A;
		}
		else {
			A = B;
		}
	}
	printf("A = %i \n", A);
	printf("B = %i \n", B);

	return 0;

}
