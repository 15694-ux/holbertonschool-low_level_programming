#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

void onetonine_commas(unsigned long long n)

{
	if (n < 10) {
		putchar('0' + n);
		return;
	}

	onetonine_commas(n / 10);

	static int number_count = 0;
	number_count++;

	putchat('\n');
	return(0);
}
