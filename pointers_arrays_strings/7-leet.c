#include "main.h"
/**
 * leet(char *) - Will change selected alpha to numeral
 * @p: Points to string
 * Return: Returns to modified string
 */
char *leet(char *p)
{
	char num[] = {'1', '1', '7', '7', '0', '0', '3', '3', '4', '4'};
	char alp[] = {'l', 'L', 't', 'T', 'o', 'O', 'e', 'E', 'a', 'A'};
	int i;
	int j;

	i = 0;

	while (p[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (p[i] == alp[j])
			{
				p[i] = num[j];
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (p);
}
