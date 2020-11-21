#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	printf("Введите значение A \n");
	scanf("%i", &A);
	printf("Введите значение B \n");
	scanf("%i", &B);
	printf("Введите значение C \n");
	scanf("%i", &C);
	if ((A < B) && (B < C)) {
		printf("Истина");
	}
	else {
		printf("Ложь");
	}

	return 0;

}

