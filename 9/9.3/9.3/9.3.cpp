#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int K, N, F;
	printf("Введите значение K \n");
	scanf("%i", &K);
	printf("Введите значение N \n");
	scanf("%i", &N);
	F = ((K+N-2) % 7) + 1;
	printf("Номер дня недели для %i дня равен %i \n", K, F);
	return 0;

}
