#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, j;
    int* A;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива \n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    for (i = 1; i <= N - 1 ; i++) {
        for (j = i + 1; j <= N; j++) {
            if (A[i] == A[j]) {
                printf("Номера одинаковых элементов %i и %i ", i, j);
            }
        }
    }
    return 0;
}