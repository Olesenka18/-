#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, m, k;
    int* A;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива \n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    m = 0;
    k = 0;
    for (i = 1; i <= N; i++) {
        if ((A[i] > A[i - 1]) && (A[i] > A[i + 1])) {
            m = A[i];
            k = i;
        }
    }
    printf("%i ", k);
    return 0;
}