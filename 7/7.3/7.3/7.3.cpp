#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float X, A, Y, K;
	printf("Введите значение X \n");
	scanf("%f", &X);
	printf("Введите цену A \n");
	scanf("%f", &A);
	printf("Введите значение Y \n");
	scanf("%f", &Y);
	A = A / X;
	K = A * Y;
	printf("Цена одного килограмма %lf \n", A);
	printf("Стоимость %lf кг конфет равна %lf рублей \n", Y, K);
	return 0;

}