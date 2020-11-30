#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B;
	printf("Введите значение A \n");
	scanf("%i", &A);
	printf("Введите значение B \n");
	scanf("%i", &B);
	if ((A > 2) && (B <= 3)) {
		printf("Истина");
	}
	else {
		printf("Ложь");
	}

	return 0;

}
