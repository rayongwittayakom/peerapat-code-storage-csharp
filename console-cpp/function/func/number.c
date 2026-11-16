#include <stdio.h>

int main() {
	int number = 10;
	int *p = &number;

	printf("%p", &number);
	printf("%p", p);
}