#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns pointed to newly allocated space in
 * which contains a copy of the string given
 * @str: Designates strings to duplicate
 * Return: Return char
 */
char *_strdup(char *str)
{
	char *dupe; /** Points to address **/
	char *orig; /** Points to address **/
	int count; /** Stores a value **/

	count = 0; /** Init count **/

	if (str == NULL) /** Checks if str is null **/
	{
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count = count + 1; /** Increments count value **/
	}

	dupe = malloc(count + 1); /** Assigns address to dupe and allocates memory **/
	orig = dupe; /** Storing dupe start pos for later use, will not move **/

	if (dupe == NULL) /** Checks if dupe is null **/
	{
		return (NULL);
	}
	while (*str != '\0') /** *str is not equal to null byte, keep incrementing **/
	{
		*dupe = *str; /** pointers are equal **/
		dupe = dupe + 1; /** pointer increments **/
		str = str + 1; /** pointer increments **/
	}
	*dupe = '\0'; /** dereferences pointer, null byte in last pointer position **/
	return (orig); /** returns orig variable, default state of dupe address **/
}
