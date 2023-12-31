#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the first number to be printed
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d", n--);
			printf(",");
			printf(" ");
		}
		printf("%d\n", n);

	} else
	{
		while (n < 98)
		{
			printf("%d", n++);
			printf(",");
			printf(" ");
		}
	}
	printf("%d\n", n);
}
