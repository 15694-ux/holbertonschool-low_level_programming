#include "main.h"
/**
 * _strncpy- Copies a string
 * @dest: Points to Destination
 * @src: Points to Source
 * @n: Max character count
 * Return: Returns Destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int p;

	i = 0;
	p = 0;

	while (i < n && src[p] != '\0')
	{
		dest[i] = src[p];
		i = i + 1;
		p = p + 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest);
}
