#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float a;
	printf("Введите значение a \n");
	scanf("%f", &a);

	printf("a = %lf \n", a);
	return 0;

}