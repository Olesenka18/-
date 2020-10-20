#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	double y, x;
	printf("Введите значение x \n");
	scanf("%lf", &x);
	y = 3 * pow(x, 6) - 6 * x * x - 7;
	printf("y = %lf \n", y);
	return 0;

}
