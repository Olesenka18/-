#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int N;
	char C;
	printf(" Север - N \n Юг - S \n Запад - W \n Восток - E \n");
	printf("Введите направление \n");
	scanf("%c", &C);
	printf("Введите действие \n");
	scanf("%i", &N);
	if (N == 1) {
		switch (C) {
		case 'N': printf("Направление: Запад"); 
			break;
		case 'S': printf("Направление: Восток"); 
			break;
		case 'W': printf("Направление: Юг"); 
			break;
		case 'E': printf("Направление: Север"); 
			break;
		}
	}
	if (N == -1){
		switch (C) {
		case 'N': printf("Направление: Восток"); 
			break;
		case 'S': printf("Направление: Запад"); 
			break;
		case 'W': printf("Направление: Север"); 
			break;
		case 'E': printf("Направление: Юг");
			break;
		}
	}


	return 0;

}
