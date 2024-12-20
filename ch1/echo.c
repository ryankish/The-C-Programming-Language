#include <stdio.h>


int main()
{	
	int c;
	// != precedence
	int x = c = getchar() != EOF;
	printf("0 or 1: %d\n", x);

	// value of EOF
	printf("EOF: %d\n", EOF);
	while ((c = getchar()) != EOF) {
		putchar(c);
	}

}

