#include "main.h"
/**
 * print_triangle - prints triangles
 * @size: size of triangles
 */
void print_triangle(int size)
{
	int row;
	int col;
	int s;

	row = 0;
	col = 0;
	s = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < size)
		{
			while (col < size - row - 1)
			{
				_putchar(' ');
				col = col + 1;
			}
			while (s < row + 1)
			{
				_putchar('#');
				s = s + 1;
			}
			_putchar('\n');
			row = row + 1;
			col = 0;
			s = 0;
		}
	}
}
