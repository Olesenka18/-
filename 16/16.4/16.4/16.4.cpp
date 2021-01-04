#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, A, B, S;
    int* m;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    m = (int*)malloc(N * sizeof(int));
    printf("Введите элементы массива \n ");
    for (i = 1; i <= N; i++) {
        printf("a[%i] = ", i);
        scanf("%i", &m[i]);
    }
    S = N / 2;
    for (i = 1; i <= S; i++) {
        printf("%i, %i, ", m[i], m[N + 1 - i]);
        if ((N % 2) != 0) {
            printf("%i", m[S + 1]);
        }
    }
    return 0;
}