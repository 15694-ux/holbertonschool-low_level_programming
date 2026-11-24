#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Function iterates on elements in the array
 * @array: Integer array
 * @size: Number of elements
 * @action: Function for each integer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
