#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int N, K = 0, T = 0;
	printf("Введите число N \n");
	scanf("%i", &N);
	while (T <= N) {
		K++;
		T = T + K;
	}
	printf("Наименьшее К равно %i \n", K);
	printf("Сумма равна %i \n", T);
	return 0;
}