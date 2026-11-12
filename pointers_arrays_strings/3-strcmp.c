#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: Points to String 1
 * @s2: Points to String 2
 * Return: Returns the difference in strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int difference;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i = i + 1;
	}
	difference = s1[i] - s2[i];
	return (difference);
}
