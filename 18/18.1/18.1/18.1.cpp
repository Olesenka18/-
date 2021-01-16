#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, j, m;
    int* A;
    int* B;
    printf("Введите количество чисел в массивах A и B\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    B = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива A\n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    printf("Введите элементы массива B\n ");
    for (j = 1; j <= N; j++) {
        printf("B[%i] = ", j);
        scanf("%i", &B[j]);
    }
    for (i = 1; i <= N; i++) {
        A[i] += B[i];
        B[i] = A[i] - B[i];
        A[i] = A[i] - B[i];
    }
    printf("\n");
    for (i = 1; i <= N; i++) {
        printf(" A[%i] = %i\n", i, A[i]);
    }
    printf("\n");
    for (j = 1; j <= N; j++) {
        printf(" B[%i] = %i\n", j, B[j]);
    }
    return 0;
}
