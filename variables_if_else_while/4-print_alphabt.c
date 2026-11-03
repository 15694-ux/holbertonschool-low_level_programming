#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' %% ch != 'e')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
