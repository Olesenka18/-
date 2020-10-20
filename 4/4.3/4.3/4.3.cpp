#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Russian");
	float a, b, m;
	printf("Введите значение переменной a \n a = ");
	scanf("%f", &a);
	printf("Введите значение переменной b \n b = ");
	scanf("%f", &b);
	m = (a + b) / 2;
	printf("Среднее арифметическое чисел a и b равно %f \n", m);
	return 0;
}

