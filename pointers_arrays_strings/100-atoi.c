#include <limits.h>
#include "main.h"
/**
 * _atoi- Converts a string to an integer
 * @s: Pointer to string
 * Return: Returns converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int digit;

	i = 0;
	sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = sign * -1;
		s = s + 1;
	}
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (i > (INT_MAX - digit) / 10)
			return (sign < 0 ? INT_MIN : INT_MAX);
		i = i * 10 + digit;
		s = s + 1;
	}
	return (i * sign);
}
