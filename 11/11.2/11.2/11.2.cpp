#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, C, S;
	printf("Введите значение A \n");
	scanf("%i", &A);
	printf("Введите значение B \n");
	scanf("%i", &B);
	printf("Введите значение C \n");
	scanf("%i", &C);
	if (A >= B) {
		if (B >= C) {
			S = A + B;
		}
		else {
			S = A + C;
		}
	}
	else {
		if (A >= C) {
			S = A + B;
		}
		else {
			S = B + C;
		}
	}
	printf("S = %i", S);

	return 0;

}
