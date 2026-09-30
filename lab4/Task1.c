#include <stdio.h>
#include <locale.h>

void main() {
	setlocle(LC_CTYPE, "RUS");

	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("Символ -> %c", c);
	printf("Целое число -> %c", i);
	printf("Вещественное с плавающей запятой -> %c", f);
	printf("Вещественное -> %c", d);
}
