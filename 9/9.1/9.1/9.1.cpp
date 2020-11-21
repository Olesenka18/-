#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int N;
	printf("Введите значение N \n");
	scanf("%i", &N);
	N = N % 60;
	printf("C начала последней минуты прошло %i секунд  \n", N);
	return 0;

}
