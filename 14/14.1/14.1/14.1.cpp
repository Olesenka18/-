#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, i, j;
	printf("Введите число A \n");
	scanf("%i", &A);
	printf("Введите число B \n");
	scanf("%i", &B);
	for (i = A; i <= B; i++) {
		for (j = 0; j < i; j++) {
			printf("%i ", i);
		}
	}
	return 0;
}