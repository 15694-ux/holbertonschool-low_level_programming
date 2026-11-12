#include "main.h"
/**
 * reverse_array - Reverses the integers in an array
 * @n: Number of items in an array
 * @a: Points to the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int left;
	int right;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		temp = a[left];
			a[left] = a[right];
			a[right] = temp;

			left = left + 1;
			right = right - 1;
	}
}
