#include "main.h"

/**
 * _isalpha - will check for alphabet characters
 * @c: will be checked if it is an alpha character
 *  Return: 1 if Alpha character 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
