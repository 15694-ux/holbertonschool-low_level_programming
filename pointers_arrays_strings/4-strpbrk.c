#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Search string for any set of bytes
 * @s: Points to string
 * @accept: Points to accept string
 * Return: Points to matching byte, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int p;

	i = 0;

	while (s[i] != '\0')
	{
		p = 0;
		while (accept[p] != '\0')
		{
			if (s[i] == accept[p])
			{
				return (&s[i]);
			}
			else
			{
				p = p + 1;
			}
		}
		i = i + 1;
	}
	return (NULL);
}
