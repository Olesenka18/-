#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, m;
    int* A;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива \n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    m = A[2];
    for (i = 2; i <= N; i=i+2) {
            if (A[i] <= m) {
                m = A[i];
            }
    }
    printf("%i", m);
    return 0;
}