#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);

int main() {

	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) {
		printf("%s", longest);
	}
	return 0;
}

/* input array char s[] decays into a pointer - could also write char *s */
int getLine(char *s, int lim) {
	int c, i;

	for (i=0; i <= lim && (c=getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {

	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}

}

