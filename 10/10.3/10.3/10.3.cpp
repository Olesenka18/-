#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	printf("Введите значение A \n");
	scanf("%i", &A);
	B = A % 2;
	if ((B == 0) && (A>9) && (A < 100)) {
		printf("Истина");
	}
	else {
		printf("Ложь");
	}

	return 0;

}
