#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * main - Add all positive numbers
 * @argc: Command-line arguments
 * @argv: Array of argument strings
 * Return: 0 for Success, 1 if non-numeral detected
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j = j + 1;
		}
		sum += atoi(argv[i]);
		i = i + 1;
	}
	printf("%d\n", sum);
	return (0);
}
