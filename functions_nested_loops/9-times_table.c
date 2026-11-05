#include "main.h"
/**
 * times_tables - prints the 9 times tables starting at 0
 */

void times_table(void)
{
	int row = 0;

	while (row < 0)
	{
		int col = 0;

		while (col < 0)
		{
			int result = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			col = col + 1;
		}
		_putchar('\n');
		row = row + 1;
	}
}
