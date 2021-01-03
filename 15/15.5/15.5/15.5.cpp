#include <stdio.h>
#include <locale.h>
float Fact2(int N) {

  int f2 = N;
  int i = N; 
  while (i > 3) {
	  i = i - 2;
	  f2 = f2 * i;
  }
    return f2;
}

int main(void) {
	setlocale(LC_ALL, "Russian");
	int N;
	float S;
	printf("Введите N \n");
	scanf("%i", &N);
	S = Fact2(N);
	printf("N!! = %f \n", S);
	return 0;
}