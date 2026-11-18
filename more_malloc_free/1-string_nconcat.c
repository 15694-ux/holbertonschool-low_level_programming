#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Returns length of a string
 * @str: String to check
 * Return: String length
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
/**
 * null_check - Checks if value is null
 * @x: Character to check
 * Return: Returns null if invalid, else returns char
 */
char *null_check(char *x)
{
	if (x == NULL)
	{
		x = "";
	}
	return (x);
}
/**
 * string_nconcat - Function to concatanate two strings.
 * @s1: String 1
 * @s2: String 2
 * @n: Value to check against
 * Return: Null if memory allocation fails, otherwise concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a, b, i, j;

	s1 = null_check(s1);
	s2 = null_check(s2);

	if (n < _strlen(s2))
	{
		b = (n);
	}
	a = _strlen(s1);
	i = 0;
	j = 0;
	c = malloc(a + b + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i = i + 1;
	}
	while (j < b)
	{
		c[i] = s2[j];
		j = j + 1;
		i = i + 1;
	}
	c[i] = '\0';
	return (c);
}
