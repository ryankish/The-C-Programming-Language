/* lower written with conditional expression */
#include <stdio.h>

int lower(int c) {
    return ((c>= 'A') && (c<='Z')) ? c + 'a' - 'A' : c;
}

int main() {

    char c = 'A';
    char n = '0';

    printf("%c %c\n", c, lower(c));
    printf("%c %c\n", n, lower(n));
}
