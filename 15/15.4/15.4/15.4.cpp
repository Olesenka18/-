#include <stdio.h>
#include <locale.h>
int Quarter(float x, float y) {
	if ((x > 0) && (y > 0)) return (1);
	if ((x < 0) && (y > 0)) return (2);
	if ((x < 0) && (y < 0)) return (3);
	if ((x > 0) && (y < 0)) return (4);
}
int main(void) {
	setlocale(LC_ALL, "Russian");
	float x, y;
	int i, S;
	for (i = 1;i <= 3;i++) {
		printf("Введите x \n");
		scanf("%f", &x);
		printf("Введите y \n");
		scanf("%f", &y);
		S = Quarter(x, y);
		printf("Номер четверти %i \n", S);
	}
	return 0;
}