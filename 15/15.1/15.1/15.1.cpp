#include <stdio.h>
#include <locale.h>
float PowerA3(float A, float B) {
	B = A * A * A;
	return(B);
}
int main(void) {
	setlocale(LC_ALL, "Russian");
	int i;
	float A, B = 0;
	for (i = 1; i <= 5; i++) {
		printf("Введите A \n");
		scanf("%f", &A);
		B = PowerA3(A, B);
		printf("B = %f\n", B);
	}

	return 0;
}