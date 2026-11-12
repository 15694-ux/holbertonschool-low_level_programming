#include "main.h"
/**
 * _memcpy - Copies memory from an area
 * @dest: Destination for bytes
 * @src: Source of bytes
 * @n: Byte count to copy
 * Return: Points to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
