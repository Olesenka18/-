#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	double y, x;
	printf("Введите значение x \n");
	scanf("%lf", &x);
	y = 4 * pow((x-3), 6) - 7 * pow((x - 3), 3) + 2;
	printf("y = %lf \n", y);
	return 0;

}