#include <stdio.h>

void main() {
	int a = 11;
	int b = 3;

	int x = a / b;
	float y = a / b;
	double z = a / b;

	printf("%d, %f, %e", x, y, z);
}
