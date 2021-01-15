#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int K, L, N, i, S = 0, M = 0;
    int* A;
    float C;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    printf("Введите число K\n K = ");
    scanf("%i", &K);
    printf("Введите число L \n L = ");
    scanf("%i", &L);
    A = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива \n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    for (i = K; i <= L; i++) {
        S = S + A[i];
        M++;
    }
    C = (float)S / (float)M;
    printf("Среднее арифметическое равно %f", C);
    return 0;
}