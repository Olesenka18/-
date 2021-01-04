#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i;
    int* A;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    A = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива \n ");
    for (i = 1; i <= N; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    for (i = 1; i <= N; i++) {
       if ((i % 2) != 0){
            printf("%i ", A[i]);
        }
    }
    for (i = N; i >= 1; i--) {
        if ((i % 2) == 0) {
            printf("%i ", A[i]);
        }
    }
    return 0;
}