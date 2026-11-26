#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * main - Prints name of program with a newline after
 * @argc: Argument count in command-line
 * @argv: Array of aruments in command-line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
