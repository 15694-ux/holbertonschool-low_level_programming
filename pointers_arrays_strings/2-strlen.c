#include "main.h"
#include <stdio.h>
/**
 * _strlen - will print the length of the string in numbers
 * @s: value to be counted
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;	

	i = 0;
	
	while (s[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
