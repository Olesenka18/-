#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int X, Y;
	printf("Введите координаты точки A \n");
	printf("X = ");
	scanf("%i", &X);
	printf("Y = ");
	scanf("%i", &Y);

	if ((X > 0) && (Y > 0)) {
		printf("I четверть");
	}
	if ((X > 0) && (Y < 0)) {
		printf("IV четверть");
	}
	if ((X < 0) && (Y > 0)) {
		printf("II четверть");
	}
	if ((X < 0) && (Y < 0)) {
		printf("III четверть");
	}

	return 0;

}
