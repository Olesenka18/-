#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

int main(void) {
	setlocale(LC_ALL, "Russian");
	double a;
	printf("Введите значение a \n");
	scanf("%lf", &a);
	a = a * 180 / pi;
	printf("a = %lf \n", a);
	return 0;

}