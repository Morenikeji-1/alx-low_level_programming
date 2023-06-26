#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that will assign a random number to variable n everytime
 * It will execute and print it
 * Return:0 (Success)
 */
int main(void)
{
	int n;
	int last_dg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dg = n % 10;

		if (n % 10 > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, last_dg);
		else if (n % 10 == 0)
			printf("Last digit of %d is %d and is 0\n", n, last_dg);
		else if (n % 10 < 6 && n % 10 != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dg);
	return (0);
}
