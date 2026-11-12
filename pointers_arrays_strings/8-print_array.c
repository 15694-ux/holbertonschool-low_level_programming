#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of integers into an array with a newline after
 * @a: array pointer
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i = i + 1;
	}
	printf("\n");
}
