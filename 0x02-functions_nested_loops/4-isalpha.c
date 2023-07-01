#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: collect alphabets
 * Return: (1) if c is a letter, lowercase or uppercase
 *
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
