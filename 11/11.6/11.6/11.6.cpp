#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int X, k;
	printf("Введите число\n");
	scanf("%i", &X);
	if ((X % 2) == 0) {
		k = 0;
		while (X > 0) {
			k = k + 1;
			X = X / 10;
		}
		if (k == 1) {
			printf("Чётное однозначное число");
		}
		if (k == 2) {
			printf("Чётное двузначное число");
		}
		if (k == 3) {
			printf("Чётное трёхзначное число");
		}

	}
	if ((X % 2) != 0) {
		k = 0;
		while (X > 0) {
			k = k + 1;
			X = X / 10;
		}
		if (k == 1) {
			printf("Нечётное однозначное число");
		}
		if (k == 2) {
			printf("Нечётное двузначное число");
		}
		if (k == 3) {
			printf("Нечётное трёхзначное число");
		}

	}

	return 0;

}
