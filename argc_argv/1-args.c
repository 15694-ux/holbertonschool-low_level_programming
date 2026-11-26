#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * main - Prints number of arguments passed
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
