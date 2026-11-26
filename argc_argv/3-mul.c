#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * main - Multiplay two numbers
 * @argc: Command-line arguments
 * @argv: Argument vectors
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("ERROR!\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
