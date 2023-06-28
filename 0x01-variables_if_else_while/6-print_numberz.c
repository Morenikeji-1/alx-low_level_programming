#include <stdio.h>
/**
 * main - A program that prints all single base 10 numbers from 0
 * Return: 0 (Success)
 */

int main(void)
{
	int zero = 0;

	while (zero <= 9)
	{
		putchar(zero);
		zero++;
	}
	putchar('\n');
	return (0);
}

