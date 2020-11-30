#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int X;
	printf("Введите число \n");
	scanf("%i", &X);
	if (X > 0) {
		if ( (X % 2) == 0){
			printf("Положительное чётное число");
		}
		else {
			printf("Положительное нечётное число");
		}
	}
	if (X < 0) {
		if (X % 2 == 0) {
			printf("Отрицательное чётное число");
		}
		else {
			printf("Отрицательное нечётное число");
		}
	}
	if (X == 0) {
		printf("Нулевое число");
	}

	return 0;

}
