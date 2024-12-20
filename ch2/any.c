#include <stdio.h>

int any(char s1[], char s2[]) {

    int s1p, s2p;

    for (s1p=s2p=0; s1[s1p]!='\0'; s1p++) {
        for (s2p=0; s2[s2p]!='\0'; s2p++) {
            if (s1[s1p] == s2[s2p]) {
                return s1p;
            }
        }
    }
    return -1;
}

int main() {

    char s1[] = "the lazy dog";
    char s2[] = "wy";

    int res = any(s1, s2);
    printf("%d", res);

    return 0;
}
