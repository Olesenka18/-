#include <stdio.h> 
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Russian");
    int a[10];
    int N, i = 1, j = 1;
    printf("Введите N:\n");
    scanf("%i", &N);
    for (i = 1; i <= N; i++, j += 2) a[i] = j;
    for (i = 1; i <= N; i++) printf("%i : %i\n", i, a[i]);
    return 0;
}