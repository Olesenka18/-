#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("Введите сторону a \n");
	scanf("%i", &a);
	printf("Введите сторону b \n");
	scanf("%i", &b);
	printf("Введите сторону c \n");
	scanf("%i", &c);
	if (((a + b) > c) && ((a + c) > b) && ((c + b) > a)) {
		printf("Истина");
	}
	else {
		printf("Ложь");
	}

	return 0;

}