#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i;
    float A, S = 1, K = 1;
    printf("Введите N \n");
    scanf("%i", &N);
    printf("Введите A \n");
    scanf("%f", &A);
    for (i = 1; i <= N; ++i) {
        K = K * A * (-1);
        S = S + K;
    }
    printf("S = %f ", S);
    return 0;
}
