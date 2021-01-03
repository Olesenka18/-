#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
    int A;
	printf("Введите год \n");
	scanf("%i", &A);
    printf("год ");
    switch (A % 10) {
    case 0: printf("бел");
        break;
    case 1: printf("бел");
        break;
    case 2: printf("чёрн");
        break;
    case 3: printf("чёрн");
        break;
    case 4: printf("зелён");
        break;
    case 5: printf("зелён");
        break;
    case 6: printf("красн");
        break;
    case 7: printf("красн");
        break;
    case 8: printf("жёлт");
        break;
    case 9: printf("жёлт");
        break;
    }
    switch (A % 12) {
    case 0: printf("ой ");
        break;
    case 1: printf("ой ");
        break;
    case 2: printf("ой ");
        break;
    case 3: printf("ой ");
        break;
    case 4: printf("ой ");
        break;
    case 5: printf("ой ");
        break;
    case 6: printf("ого ");
        break;
    case 7: printf("ого ");
        break;
    case 8: printf("ого ");
        break;
    case 9: printf("ой ");
        break;
    case 10: printf("ой ");
        break;
    case 11: printf("ой ");
        break;
    }
    switch((A+8) % 12){
    case 0: printf("крысы");
        break;
    case 1: printf("коровы");
        break;
    case 2: printf("тигра");
        break;
    case 3: printf("зайца");
        break;
    case 4: printf("дракона");
        break;
    case 5: printf("змеи");
        break;
    case 6: printf("лошади");
        break;
    case 7: printf("овцы");
        break;
    case 8: printf("обезьяны");
        break;
    case 9: printf("курицы");
        break;
    case 10: printf("собаки");
        break;
    case 11: printf("свиньи");
        break;
    }
	return 0;
}
