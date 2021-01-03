#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int i;
	float A, S;
	printf("Введите стоимость килограмма конфет \n");
	scanf("%f", &A);
	for (i = 1; i < 11; i++) {
		S = A * 0.1 * i;
		printf("%f ", S);
}
	return 0;

}
