#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    int a, b;
    printf("Введите число \n");
    scanf("%i", &a);
    printf("Введите месяц \n");
    scanf("%i", &b);
    switch (a) {
    case 1:
        printf("Первое ");
        break;
    case 2:
        printf("Второе ");
        break;
    case 3:
        printf("Третье ");
        break;
    case 4:
        printf("Четвёртое ");
        break;
    case 5:
        printf("Пятое ");
        break;
    case 6:
        printf("Шестое ");
        break;
    case 7:
        printf("Седьмое ");
        break;
    case 8:
        printf("Восьмое ");
        break;
    case 9:
        printf("Девятое ");
        break;
    case 10:
        printf("Десятое ");
        break;
    case 11:
        printf("Одиннадцатое ");
        break;
    case 12:
        printf("Двенадцатое ");
        break;
    case 13:
        printf("Тринадцатое ");
        break;
    case 14:
        printf("Четырнадцатое ");
        break;
    case 15:
        printf("Пятнадцатое ");
        break;
    case 16:
        printf("Шестнадцатое ");
        break;
    case 17:
        printf("Семнадцатое ");
        break;
    case 18:
        printf("Восемнадцатое ");
        break;
    case 19:
        printf("Девятнадцатое ");
        break;
    case 20:
        printf("Двадцатое ");
        break;
    case 30:
        printf("Тридцатое ");
        break;
    }
    if ((a > 20) && (a ==31))  {
        switch (a / 10) {
        case 2:
            printf("Двадцать ");
            break;
        case 3:
            printf("Тридцать ");
            break;
        }
        switch (a % 10) {
        case 1:
            printf("первое ");
            break;
        case 2:
            printf("второе ");
            break;
        case 3:
            printf("третье ");
            break;
        case 4:
            printf("четвёртое ");
            break;
        case 5:
            printf("пятое ");
            break;
        case 6:
            printf("шестое ");
            break;
        case 7:
            printf("седьмое ");
            break;
        case 8:
            printf("восьмое ");
            break;
        case 9:
            printf("девятое ");
            break;
        }
    }
    switch (b) {
    case 1:
        printf("января");
        break;
    case 2:
        printf("февраля");
        break;
    case 3:
        printf("марта");
        break;
    case 4:
        printf("апреля");
        break;
    case 5:
        printf("мая");
        break;
    case 6:
        printf("июня");
        break;
    case 7:
        printf("июля");
        break;
    case 8:
        printf("августа");
        break;
    case 9:
        printf("сентября");
        break;
    case 10:
        printf("октября");
        break;
    case 11:
        printf("ноября");
        break;
    case 12:
        printf("декабря");
        break;
    }
    return 0;
}

