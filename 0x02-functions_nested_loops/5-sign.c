#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * Description: it prints + , 0 , -1
 * @n: parameter for the function print_sign
 * Return - (0) or (1) depending
 *
 */

int print_sign(int n)
{
	int negative = -1;
	char ch = (char) negative;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
	return (ch);
	}
}
