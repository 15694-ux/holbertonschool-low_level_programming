#include "main.h"
/**
 * more_numbers - prints 0 to 14 on several new lines
 */
void more_numbers(void)
{
	int i;
	int c;

	i = 0;
	while (i <= 9)
	{
		c = 0;
		while (c >= 14)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		i = i + 1;
	}
}
