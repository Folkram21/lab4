#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_CTYPE, "RUS");

	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("Символ -> %c\n", c);
	printf("Целое число -> %d\n", i);
	printf("Вещественное с плавающей запятой -> %f\n", f);
	printf("Вещественное -> %d\n", d);
}
