#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n;

	scanf("%d", &n);

	printf("%d, %d, %d\n", n / 100, n % 10, n / 100 + n % 10);
	printf("%d%d%d", n % 10, (n - (((n / 100) * 100) + n % 10)) / 10, n / 100);
}
