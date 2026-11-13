#include "main.h"
/**
 * print_chessboard - Prints a chessboard
 * @a: Points to an array
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	row = 0;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col = col + 1;
		}
		_putchar('\n');
		row = row + 1;
	}
}
