#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, x3, y3, S, P, p, a, b, c;
	printf("Введите координаты первой вершины \n");
	 scanf("%f %f", &x1, &y1);
	printf("Введите координаты второй вершины \n");
	 scanf("%f %f", &x2, &y2);
	printf("Введите координаты третьей вершины \n");
	 scanf("%f %f", &x3, &y3);
	 a = sqrtf(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	 b = sqrtf(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	 c = sqrtf(((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3)));
	P = a + b + c;
	p = P / 2;
	S = sqrtf(p * (p - a) * (p - b) * (p - c));
	printf("P = %f \n", P);
	printf("S = %f \n", S);

	return 0;

}
