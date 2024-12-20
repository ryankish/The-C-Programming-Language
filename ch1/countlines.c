#include <stdio.h>

int main() {
	int l = 0;

	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++l;
		}
	}
	printf("num lines: %d\n", l);
}
