#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    int N, i, S = 0;
    printf("Введите N \n");
    scanf("%i", &N);
    for (i = 1; i <= N; ++i) {
        S = S + (2 * i - 1);
        printf("S = %i \n ", S);
    }
    printf("N*N = %i", S);
    return 0;
}

