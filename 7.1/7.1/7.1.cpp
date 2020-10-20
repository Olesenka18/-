#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

int main(void) {
	setlocale(LC_ALL, "Russian");
	float a;
	printf("Введите значение a \n");
	scanf("%f", &a);
	a = a * pi / 180;
	printf("a = %lf \n", a);
	return 0;

}