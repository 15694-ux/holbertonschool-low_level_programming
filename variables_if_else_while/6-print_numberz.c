#include <stdio.h>
#include <ctype.h>
#include <stdint.h>

/**
 * main - entry point of program
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)

	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
