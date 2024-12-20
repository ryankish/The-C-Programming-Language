#include <stdio.h>
/* char int values on my machine -- I think it can differ depending on machine when converting to int */

int main() {
    char lower[26] = "abcdefghijklmnopqrstuvwxyz";
    char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i=0; i<26; ++i) {
        int valLower = lower[i];
        int valUpper = upper[i];
        printf("%c: %d  %d\n", lower[i], valLower, valUpper);
    }
}
