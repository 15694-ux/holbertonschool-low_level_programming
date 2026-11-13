#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a sqaure matrix
 * @a: Points to matrix of integers
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int row;
	int col;
	int s1;
	int s2;

	row = 0;
	s1 = 0;
	s2 = 0;

	while (row < size)
	{
		col = size - 1 - row;
		s1 = s1 + a[row * size + col];
		col = row;
		s2 = s2 + a[row * size + col];
		row = row + 1;
	}
	printf("%d, %d\n", s2, s1);
}
