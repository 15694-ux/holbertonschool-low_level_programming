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
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++) {
		upper = toupper(lower);
		putchar(lower);
		putchar(upper);
	}

	putchar('\n');
	return (0);
}
