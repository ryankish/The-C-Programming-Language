#include <stdio.h>

int power(int m, int n); // function declaration / prototype

int main() {

	int i;
	for (i = 0; i < 10; ++i) {
		printf("i: %d i^2: %d i^3 %d\n", i, power(i, 2), power(i, 3));
	}
	return 0;
}

/* note: pass by value */
int power(int base, int n) {
	int p;

	p = 1;
	for (p=1; n>0; --n) {
		p = p * base;
	}
	return p;
}
