#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int N;
	printf("Введите N \n");
	scanf("%i", &N);
	int F1 = 1, F2 = 1, F = 0, K = 2;

	while (F < N) {
		K++;
		F = F2 + F1;
		F2 = F1;
		F1 = F;
	}
	printf("K = %i\n", K);
	return 0;
}