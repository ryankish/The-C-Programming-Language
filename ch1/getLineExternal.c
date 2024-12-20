/*

using external variables (globals)
- NOTE: If the definition of the
external variable occurs in the source file before its use in a particular function, then there is
no need for an extern declaration in the function
- common practice is to place definitions of all external
variables at the beginning of the source file, and then omit all extern declarations.
.*/
#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

void copy(char* to, char* from);
int getLine();

int main() {
	int len;
	extern int max;
	extern char longest[];

	while ((len = getLine()) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {
		printf("%s", longest);
	}
}


int getLine() {
	int c, i;
	extern char line[];
	extern int max;

	for (i=0; i <= max && (c=getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}

	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}
