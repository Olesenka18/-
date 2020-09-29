#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void) {
	setlocale(LC_ALL, "Russian");
	float a, b, s, r, p, h;
	printf("Введите значение переменной a \n a = ");
	scanf("%f", &a);
	printf("Введите значение переменной b \n b = ");
	scanf("%f", &b);
	s = fabsf(a) + fabsf(b);
    r = fabsf(a) - fabsf(b);
	p = fabsf(a) * fabsf(b);
	h = fabsf(a) / fabsf(b);
	printf("Сумма модулей равна %f \n", s);
	printf("Разность модулей равна %f \n", r);
	printf("Произведение модулей равно %f \n", p);
	printf("Частное модулей равно %f \n", h);
	return 0;
}