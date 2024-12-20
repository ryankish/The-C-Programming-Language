#include <stdio.h>


void squeeze(char s1[], char s2[]) {

    int i, j, s2p;


    s2p = 0;
    for (s2p=0; s2[s2p] != '\0'; ++s2p) {
        for (i=j=0; s1[i] != '\0'; ++i) {
            if (s1[i] != s2[s2p]) {
                s1[j++] = s1[i];
            }
        } 
        s1[j++] = '\0';
    }
}

int main() {

    char s1[] = "the lazy dog";
    char s2[] = "eth";

    squeeze(s1, s2);
    printf("%s", s1);

}
