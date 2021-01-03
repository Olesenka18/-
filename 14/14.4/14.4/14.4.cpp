#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int K = 0, P;
	float S = 1000;
	printf("Введите P \n");
	scanf("%i", &P);
	while (S < 1100) {
		K++;
		S = S + (S / 100 * P);
	}
	printf("Количество месяцев равно %i \n", K);
	printf("Итоговый размер вклада %f \n", S);
	return 0;
}