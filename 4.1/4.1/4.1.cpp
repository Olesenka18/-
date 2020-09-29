#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Russian");
	float a, b, s, p;
	printf("Введите значение переменной a \n a = ");
	scanf("%f", &a);
	printf("Введите значение переменной b \n b = ");
	scanf("%f", &b);
	s = a * b;
	p = (a + b) * 2;
	printf("Площадь равна %f \n", s);
	printf("Периметр равен %f \n", p);
	return 0;
}