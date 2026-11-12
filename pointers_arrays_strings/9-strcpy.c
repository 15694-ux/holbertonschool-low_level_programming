#include "main.h"
/**
 * _strcpy - copies Source string to Destination
 * @dest: Destination
 * @src: Source
 * Return: Pointer to Destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
