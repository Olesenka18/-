#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int N, i;
	float R = 1;
    printf("Введите N \n");
    scanf("%i", &N);
    for (i = 1; i <= N; ++i) {
        R = R * (1 + ((float)i / 10));
    }
        printf("R = %f \n ", R);
        return 0;
    }
