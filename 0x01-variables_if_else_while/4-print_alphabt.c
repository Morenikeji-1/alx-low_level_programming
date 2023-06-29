#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase excluding q and e
 *
 * Return:0 (Success)
 *
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;

	}
	putchar('\n');
	return (0);
}

