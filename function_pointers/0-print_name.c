#include "function_pointers.h"
/**
 * print_name - Function call for print name
 * @name: Points to string to print
 * @f: Points to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
