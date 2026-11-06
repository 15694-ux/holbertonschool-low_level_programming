#include "main.h"
/**
 * print_square - prints pound sign for specified sizes
 * @size: specified size
 */
void print_square(int size)
{
	int row;
	int col;

	row = 0;
	col = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		while (row < size)
		{
			while (col < size)
			{
				_putchar(35);
				col = col + 1;
			}
			_putchar('\n');
			col = 0;
			row = row + 1;
		}
}
