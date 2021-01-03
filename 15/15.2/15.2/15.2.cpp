#include <stdio.h>
#include <locale.h>
int Sign(float X) {
	if (X < 0) return (-1);
	if (X == 0) return (0);
	if (X > 0) return (1);
}
int main(void) {
	setlocale(LC_ALL, "Russian");
	int X, Y, S;
	float A, B;
	printf("Введите A \n");
	scanf("%f", &A);
	printf("Введите B \n");
	scanf("%f", &B);
	X = Sign(A);
	Y = Sign(B);
	S = X + Y;
	printf("S = %i \n", S);
	return 0;
}