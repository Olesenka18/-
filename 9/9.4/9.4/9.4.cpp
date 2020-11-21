#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int A, B, C, N, P;
	printf("Введите сторону A \n A = ");
	scanf("%i", &A);
	printf("Введите сторону B \n B = ");
	scanf("%i", &B);
	printf("Введите сторону C \n C = ");
	scanf("%i", &C);
	N = (A * B) / (C * C);
	P = (A * B) % (C * C);
	printf("Количество квадратов равно %i \n", N);
	printf("Площадь оставшейся части равна %i \n", P);
	return 0;

}
