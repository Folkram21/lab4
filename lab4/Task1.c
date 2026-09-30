#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_CTYPE, "RUS");

	// значения по умолчанию
	// default values
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	// ввод пользователя
	// user's input
	printf("Введите символ -> ");
	scanf("%c", &c);
	printf("Введите целое число -> ");
	scanf("%d", &d);
	printf("Введите вещественное с плавающей запятой -> ");
	scanf("%f", &f);
	printf("Введите вещественное -> ");
	scanf("%e", &d);

	// вывод
	// output
	printf("Символ -> %c\n", c);
	printf("Целое число -> %d\n", i);
	printf("Вещественное с плавающей запятой -> %f\n", f);
	printf("Вещественное -> %e\n", d);
}
