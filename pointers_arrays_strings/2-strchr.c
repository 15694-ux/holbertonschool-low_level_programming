#include "main.h"
#include <stddef.h>
/**
 * _strchr - Will locate a character within a string
 * @c: Character to be replaced
 * @s: String to check
 * Return: Point to character replaced
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			i = i + 1;
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
