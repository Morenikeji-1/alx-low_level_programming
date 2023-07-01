#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: collect alphabets
 * Return: (1) if c is a letter, lowercase or uppercase
 *
 */

int _isalpha(int c)
{
	char k;
	char C;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c || k == C)
		{
			return (1);
		}
	}
	return (0);
}
