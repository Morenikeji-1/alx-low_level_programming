#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: The character to be checked
 * Return: 1 (if c is lowercase) otherwise 0
 */

int _islower(int c)
{
	char k;

	for (k = 'b'; k <= 'z'; k++)
	{
		if (k == c)
		{
			return (1);
		}
	}
	return (0);
}
