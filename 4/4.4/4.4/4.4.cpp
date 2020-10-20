#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Russian");
	float a, b, s, r, p, h;
	printf("Введите значение переменной a \n a = ");
	scanf("%f", &a);
	printf("Введите значение переменной b \n b = ");
	scanf("%f", &b);
	s = a*a + b*b;
	if (a*a >= b*b) {
		r = (a * a - b * b);
	}
	else{
		r = (b * b - a * a);
	}
	p = a * a * b * b;
	h = (a * a) / (b * b);
	printf("Сумма квадратов равна %f \n", s);
	printf("Разность квадратов равна %f \n", r);
	printf("Произведение квадратов равно %f \n", p);
	printf("Частное квадратов равно %f \n", h);
	return 0;
}