#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Russian");
	int a, b, s, p;
	printf("Введите значение переменной a \n a = ");
	scanf("%i", &a);
	printf("Введите значение переменной b \n b = ");
	scanf("%i", &b);
	s = a * b;
	p = (a + b) * 2;
	printf("Площадь равна %i \n", s);
	printf("Периметр равен %i \n", p);
	return 0;
}