#include "function_pointers.h"
/**
 * int_index - Returns index of first element for which CMP does not return 0
 * @size: Elements in array
 * @array: Array of integers
 * @cmp: Pointer to function used to compare values
 * Return: 0, else -1 if no matches or size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int)) /** Function to use **/
{
	int i; /** Initialize i variable **/

	if (array == NULL || cmp == NULL || size <= 0) /** Checks value **/
		return (-1); /** Returns if not 0 **/

	for (i = 0; i < size; i = i + 1) /** Check for i against size, iterate + 1 **/
	{
		if (cmp(array[i]) != 0) /** Pointer to function/array checks size **/
			return (i); /** Return i value **/
	}
	return (-1); /** Return -1 value **/
}
