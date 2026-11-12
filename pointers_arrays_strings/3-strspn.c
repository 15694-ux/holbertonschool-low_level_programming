#include "main.h"
/**
 * _strspn - Gives prefix string length
 * @s: Points to string
 * @accept: Points to accept string
 * Return: Returns number of bytes before and after accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int p;

	i = 0;

	while (s[i] != '\0')
	{
		p = 0;
		while (accept[p] != '\0')
		{
			if (s[i] == accept[p])
			{
				break;
			}
			p = p + 1;
		}
		if (accept[p] == '\0')
		{
			break;
		}
		i = i + 1;
	}
	return (i);
}
