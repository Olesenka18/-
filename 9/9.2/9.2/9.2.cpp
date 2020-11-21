#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int K, N;
	printf("Введите значение K \n");
	scanf("%i", &K);
	N = K % 7;
	printf("Номер дня недели для %i дня равен %i \n", K, N);
	return 0;

}
