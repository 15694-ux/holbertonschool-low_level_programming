#include "main.h"
/**
 * more_numbers - prints 0 to 14 on several new lines
 */
void more_numbers(void)
{
	int i = 0;

	while (i <= 14)
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
	return;
}
