#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * main - Prints all passed arguments and program name
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}
