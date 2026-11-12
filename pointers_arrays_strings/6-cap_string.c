#include "main.h"
/**
 * *cap_string - Points to Function
 * @ptr: Points to a String
 * Return: Returns Upper Alpha from the start of a string
 */
char *cap_string(char *ptr)
{
	int a;

	a = 0;

	while (ptr[a] != '\0')
	{
		if (ptr[a] >= 'a' && ptr[a] <= 'z')
		{
			if (a == 0 || ptr[a - 1] == ' ' ||
					ptr[a - 1] == '.' || ptr[a - 1] == ',' ||
					ptr[a - 1] == '"' || ptr[a - 1] == '(' ||
					ptr[a - 1] == ')' || ptr[a - 1] == '{' ||
					ptr[a - 1] == '}' || ptr[a - 1] == '!' ||
					ptr[a - 1] == '?' || ptr[a - 1] == '\t' ||
					ptr[a - 1] == '\n' || ptr[a - 1] == ';')
			{
				ptr[a] = 'A' + (ptr[a] - 'a');
			}
		}
		a = a + 1;
	}
	return (ptr);
}
