#include "main.h"
/**
 * _strncat- Concatenates two strings
 * @dest: Pointer to first String
 * @src: Pointer to second string
 * @n: Max number of characters
 * Return: Returns Destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int p;

	i = 0;
	p = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[p] != '\0' && p < n)
	{
		dest[i] = src[p];
		i = i + 1;
		p = p + 1;
	}
	dest[i] = '\0';
	return (dest);
}
