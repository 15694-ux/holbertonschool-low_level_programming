#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring
 * @haystack: Points to first string
 * @needle: Points to second string
 * Return: Points to the start of matching string, otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int p;

	i = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		p = 0;
		while (needle[p] != '\0')
		{
			if (haystack[i + p] == needle[p])
			{
				p = p + 1;
			}
			else
			{
				break;
			}
		}
		if (needle[p] == '\0')
		{
			return (&haystack[i]);
		}
		else
		{
			i = i + 1;
		}
	}
	return (NULL);
}
