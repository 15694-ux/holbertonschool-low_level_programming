#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function to print the sum of all numbers
 * @n: Passed in as argument from main
 * Return: n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	int total;
	va_list arg;

	va_start(arg, n);

	num = 0;
	total = 0;

	while (num < n)
	{
		total += va_arg(arg, int);
		num = num + 1;
	}
	va_end(arg);
	return (total);
}
