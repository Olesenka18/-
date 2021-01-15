#include <stdio.h> 
#include <locale.h>
int main(void) {
    setlocale(LC_ALL, "Russian");
    int i, D, M;
    int A[] = {0, 8, 16, 24, 32, 40}; //введите числа массива
    int N = sizeof(A) / sizeof(int);
    int K = 0;
    D = A[2] - A[1];
    for (i = 0; i < N; i++) {
        if ((A[i] - A[i - 1]) == D) {
            K++;
        }
    }
    if (K == (N - 1)) {
        printf("Элементы образуют арифметическую прогрессию. D =  %i", D);
    }
    else {
        printf("Элементы не образуют арифметическую прогрессию \n 0");
    }
    return 0;
}