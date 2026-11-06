#include "main.h"
/**
 * _isdigit - checks for digits 0 to 9
 *
 * @c: to be checked
 *
 * Return: return 1 for digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
