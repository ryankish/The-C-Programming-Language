#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("char min:   %60d   char max: %60d\n", CHAR_MIN, CHAR_MAX);
    printf("short min:  %60d   short max: %60d\n", SHRT_MIN, SHRT_MAX);
    printf("int min:    %60d   int max: %60d\n", INT_MIN, INT_MAX);
    printf("long min:   %60ld   long max: %60ld\n", LONG_MIN, LONG_MAX);
    printf("float min:  %60.6f   float max: %60.6f\n", FLT_MIN, FLT_MAX);
    return 0;
}

