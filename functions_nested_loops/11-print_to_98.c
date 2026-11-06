#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - will print all numbers from 0 to 98 with comma separators
 * @n: the value to be used
 * Return: always 0
 */

void print_to_98(int n)
{
	int i;

	i = n;

	if (i == 98)
	{
		printf("%d\n", i);
	}
	else if (i <= 98)
	{
		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
				}
			else
			{
				printf("%d, ", i);
			}
			i = i + 1;
		}
		printf("\n");
	}
	else if (i >= 98)
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d, ", 1);
			}
			i = i - 1;
		}
		printf("\n");
	}
}
