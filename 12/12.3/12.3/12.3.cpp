#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int N;
	printf("Введите количество заданий \n");
	scanf("%i", &N);
	if ((N / 10) == 1) {
		switch (N) {
		case 10: printf("десять учебных заданий");
			break;
		case 11: printf("одиннадцать учебных заданий");
			break;
		case 12: printf("двенадцать учебных заданий");
			break;
		case 13: printf("тринадцать учебных заданий");
			break;
		case 14: printf("четырнадцать учебных заданий");
			break;
		case 15: printf("пятнадцать учебных заданий");
			break;
		case 16: printf("шестнадцать учебных заданий");
			break;
		case 17: printf("семнадцать учебных заданий");
			break;
		case 18: printf("восемнадцать учебных заданий");
			break;
		case 19: printf("девятнадцать учебных заданий");
			break;
		}
	}
	if ((N / 10) > 1) {
		switch (N / 10) {
		case 2: printf("двадцать ");
			break;
		case 3: printf("тридцать ");
			break;
		case 4: printf("сорок ");
			break;
		}
		switch (N % 10) {
		case 1: printf("одно ");
			break;
		case 2: printf("два ");
			break;
		case 3: printf("три ");
			break;
		case 4: printf("четыре ");
			break;
		case 5: printf("пять ");
			break;
		case 6: printf("шесть ");
			break;
		case 7: printf("семь ");
			break;
		case 8: printf("восемь ");
			break;
		case 9: printf("девять ");
			break;
		}

		switch (N % 10) {
		case 0: printf("учебных заданий");
			break;
		case 1: printf("учебное задание");
			break;
		case 2: printf("учебных задания");
			break;
		case 3: printf("учебных задания");
			break;
		case 4: printf("учебных задания");
			break;
		case 5: printf("учебных заданий");
			break;
		case 6: printf("учебных заданий");
			break;
		case 7: printf("учебных заданий");
			break;
		case 8: printf("учебных заданий");
			break;
		case 9: printf("учебных заданий");
			break;
		}
	}
	return 0;
}
