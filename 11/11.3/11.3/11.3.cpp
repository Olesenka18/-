#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float X1, Y1, X2, Y2, X3, Y3, AB, AC;
	printf("Введите координаты точки A \n");
	scanf("%f %f", &X1, &Y1);
	printf("Введите координаты точки B \n");
	scanf("%f %f", &X2, &Y2);
	printf("Введите координаты точки C \n");
	scanf("%f %f", &X3, &Y3);

	AB = sqrtf(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));
	AC = sqrtf(((X3 - X1) * (X3 - X1)) + ((Y3 - Y1) * (Y3 - Y1)));
	if (AB > AC) {
		printf("Ближе точка C. Расстояние равно %f", AC);
	}
	if (AB < AC) {
		printf("Ближе точка B. Расстояние равно %f", AB);
	}
	if (AC == AB) {
		printf("AB = AC = %f", AC);
	}

		return 0;

}
