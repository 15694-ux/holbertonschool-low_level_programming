#include "main.h"
/**
 * _strcat- Concatenates two strings
 * @dest: Pointer to Destination
 * @src: Pointer to Source
 * Return: Returns to Destination
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int p;

	i = 0;
	p = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[p] != '\0')
	{
		dest[i] = src[p];
		i = i + 1;
		p = p + 1;
	}
	dest[i] = '\0';
	return (dest);
}
