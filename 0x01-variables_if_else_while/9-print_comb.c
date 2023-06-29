#include <stdio.h>
/**
 * main - A program that prints all combinations of single digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

