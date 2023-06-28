#include <stdio.h>
/**
 * main - A program that prints all single base 10 numbers from 0
 * Return: 0 (Success)
 */

int main(void)
{
	int k = '0';

	while (k <= '9')
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}

