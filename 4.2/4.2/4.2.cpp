#include <stdio.h>
#include <locale.h>
#define π 3.14
int main(void) {
	setlocale(LC_ALL, "Russian");
	float d, L;
	printf("Введите диаметр \n d = ");
	scanf("%f", &d);
	L = d * π;
	printf("Длина окружности равна %f \n", L);
	return 0;
}