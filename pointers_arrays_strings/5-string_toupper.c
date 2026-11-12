#include "main.h"
/**
 * *string_toupper - Converts Lower Alpha to Upper Alpha
 * @str: Points to String
 * Return: Resturns Upper Alpha
 */
char *string_toupper(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = 'A' + (str[a] - 'a');
		}
		a = a + 1;
	}
	return (str);
}
