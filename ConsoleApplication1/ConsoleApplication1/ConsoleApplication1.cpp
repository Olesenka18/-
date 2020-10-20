#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Russian");
	float a, k;
	printf("Введите значение переменной a \n a = ");
	scanf("%i", &a);
	k = 0;
	while (a>0) {
	k = k + 1;
	a = a / 2;
	}
	printf("%f", &k);
	return 0;
}
