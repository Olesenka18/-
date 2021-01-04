#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, A, D, S = 1;
    int *m;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    printf("Введите первый член прогресии \n А = ");
    scanf("%i", &A);
    m = (int*)malloc(N * sizeof(int));
    m[1] = A;
    printf("Введите знаменатель \n D = ");
    scanf("%i", &D);
    for (i = 1; i <= N; i++) {
        m[i] = A * S;
        S = S * D;
    }
    for (i = 1; i <= N; i++) {
        printf("%i : %i\n", i, m[i]);
    }

    return 0;
}