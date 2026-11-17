#include "main.h"
#include <stdlib.h>
/**
 * char_count - counts characters for concat
 * @sc1: String 1
 * @sc2: String 2
 * Return: Counts total number of characters in sc2 and sc2
 */
int char_count(char *sc1, char *sc2)
{
	int co1, co2;

	co1 = 0;
	co2 = 0;

	while (sc1[co1] != '\0')
	{
		co1 = co1 + 1;
	}
	while (sc2[co2] != '\0')
	{
		co2 = co2 + 1;
	}
	return (co1 + co2);
}
/**
 * str_concat - concatanate two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *st1, *or1;
	int fco;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	fco = char_count(s1, s2);
	st1 = malloc(fco + 1);
	or1 = st1;

	if (st1 == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		*st1 = *s1;
		st1 = st1 + 1;
		s1 = s1 + 1;
	}
	while (*s2 != '\0')
	{
		*st1 = *s2;
		st1 = st1 + 1;
		s2 = s2 + 1;
	}
	st1 = '\0';
	return (or1);
}
