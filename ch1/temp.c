#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0; upper = 300; step = 20;
	fahr = lower;

	printf("--------------\n");
	printf("   F |    C\n");
	printf("--------------\n");
	while (fahr <= upper) {
		/* 5/9 will be 0 because integer division truncates*/
		celsius = 5 * (fahr-32) / 9;
		printf(" %3.0f   %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
