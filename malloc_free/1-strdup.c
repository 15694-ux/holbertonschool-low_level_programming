#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup(char *str) - Returns pointed to newly allocated space in
 * which contains a copy of the string given
 * @char *str: Designates strings to duplicate
 * Return: Return char
 */
char *_strdup(char *str)
{
	char *dupe; /** Points to address **/
	char *orig; /** Points to address **/

	if (str == NULL) /** Checks if str is null **/
	{
		return (NULL);
	}

	dupe = malloc(strlen(str) + 1); /** Assigns address to dupe and allocates memory **/
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
	*dupe = '\0'; /** dereferences pointer, drops null byte in last pointer position **/
	return (orig); /** returns orig variable, default state of original dupe address **/
}
