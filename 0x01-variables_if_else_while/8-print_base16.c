#include <stdio.h>
/**
 * main - A program that prints all base 16 numbers in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
		int num = '0';
		char alp = 'a';

		while (num <= '9')
		{
			putchar(num);
			num++;
		}
		while (alp <= 'f')
		{
			putchar(alp);
			alp++;
		}
		putchar('\n');
		return (0);
}



