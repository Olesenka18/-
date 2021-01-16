#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, m = 0;
    int* A;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива A \n ");
    for (i = 0; i < N; i++) {
        printf("A[%i] = ", i+1);
        scanf("%i", &A[i]);
    }
    for (i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            m = A[i];
            A[i] = A[i + 1];
            A[i + 1] = m;
        }
    }
    printf("\n");
    for (i = 0; i < N; i++) {
        printf(" A[%i] = %i\n", i + 1, A[i]);
    }
    return 0;
}