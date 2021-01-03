#include <stdio.h>
#include <locale.h>
#define pi 3.14
float RingS(float R1, float R2) {
	R1 = pi * R1 * R1;
	R2 = pi * R2 * R2;
	R1 = R1 - R2;
	return(R1);
}
int main(void) {
	setlocale(LC_ALL, "Russian");
	float R1, R2, S;
	int i;
	for (i = 1;i <= 3;i++) {
		printf("Введите R1 \n");
		scanf("%f", &R1);
		printf("Введите B \n");
		scanf("%f", &R2);
		S = RingS(R1, R2);
		printf("S = %f \n", S);
	}
	return 0;
}