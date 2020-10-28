#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float V1, V2, V, S, T;
	printf("Введите скорость первого V1 \n");
	scanf("%f", &V1);
	printf("Введите скорость второго V2 \n");
	scanf("%f", &V2);
	printf("Введите расстояние S \n");
	scanf("%f", &S);
	printf("Введите время T \n");
	scanf("%f", &T);
	V = V1 + V2;
	S = S + T * V;
	printf("Расстояние между автомобилями через %f часов равно %f \n", T, S);
	return 0;

}