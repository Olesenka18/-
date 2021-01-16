#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, max, min, K = 0, T = 0;
    int* A;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива A \n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    max = A[1];
    for (i = 1; i <= N; i++) {
        if (A[i] >= max){
            max = A[i];
            K = i;
        }
    }
    min = A[1];
    for (i = 1; i <= N; i++) {
        if (A[i] <= min) {
            min = A[i];
            T = i;
        }
    }
    if (K < T) {
        for (i = K + 1; i < T; i++) {
            A[i] = 0;
        }
    }
    if (T < K) {
        for (i = T + 1; i < K; i++) {
            A[i] = 0;
        }
    }
    printf("\n");
    for (i = 1; i <= N; i++) {
        printf(" A[%i] = %i\n", i, A[i]);
    }
    return 0;
}