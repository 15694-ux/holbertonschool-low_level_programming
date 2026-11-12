#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Points to memory
 * @b: The bytes value
 * @n: Number of bytes to fill
 * Return: Returns pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
