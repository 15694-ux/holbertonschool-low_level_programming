#inclue "main.h"

/**
 * print_sign - will print the sign of a number
 * @n: prints + if > 0 and returns 1
 * @n: print 0 if == 0 and returns 0
 * @n: prints - if < 0 and retuns -1
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (0);
}
