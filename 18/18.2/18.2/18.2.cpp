#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, K, S = 0;
    int* A;
    float* B;
    printf("Введите количество чисел в массиве A\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    B = (float*)malloc(N * sizeof(float));
    printf("Введите элементы массива A\n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    for (i = 1; i <= N; i++) {
        S = S + A[i];
        B[i] = (float)S / i;
    }
    printf("\n");
    for (K = 1; K <= N; K++) {
        printf(" B[%i] = %f\n", K, B[K]);
    }
    return 0;
}
