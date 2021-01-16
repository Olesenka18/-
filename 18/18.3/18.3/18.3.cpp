#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, j, m;
    int* A;
    int* B;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива A \n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    m = 0;
    for (i = 1; i <= N; i++) {
        if ((A[i] % 2) != 0) {
            m = A[i];
        }
    }
    for (i = 1; i <= N; i++) {
        if ((A[i] % 2) != 0) {
            A[i] = A[i] + m;
        }
    }
    printf("\n");
    for (i = 1; i <= N; i++) {
        printf(" A[%i] = %i\n", i, A[i]);
    }
    return 0;
}
