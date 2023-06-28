#include <stdio.h>
/**
 * main - A program that prints all base 10 single digits from 0
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int zero = 0;

	while (zero <= 9)
	{
		printf("%d", zero);
		zero++;
	}
	putchar('\n');
	return (0);
}
