#include "main.h"

/**
 * main - will print the alphabet
 *
 * Description - print_alphabet - will print the alphabet in one line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
