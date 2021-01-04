#include <stdio.h> 
#include <locale.h>
#include <malloc.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, A, B, S;
    int* m;
    printf("Введите количество чисел в массиве\n N = ");
    scanf("%i", &N);
    printf("Введите первый элемент массива \n А = ");
    scanf("%i", &A);
    printf("Введите второй элемент массива \n B = ");
    scanf("%i", &B);
    m = (int*)malloc(N * sizeof(int));
    m[1] = A;
    m[2] = B;
    S = m[1];
    for (i = 3; i <= N; i++) {
        m[i] = m[i - 1] + S;
        S = m[i];
    }
    for (i = 1; i <= N; i++) {
        printf("%i : %i\n", i, m[i]);
    }

    return 0;
}