#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int a;
	printf("Введите размер файла в байтах\n a = ");
	scanf("%i", &a);
	a = a / 1024;
	printf("Размер файла в килобайтах %i \n", a);
	return 0;

}