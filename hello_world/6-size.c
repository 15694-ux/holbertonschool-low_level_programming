#include <stdio.h>

/**
 * main - Entry point of the program
 * int, double, and char given identifiers
 * printf set to print the associated variables
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	long int li;
	long long int lli;
	float fl;
	char c;


	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a c is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(li));
	printf("The size of a long long int is: %lu.\n" (unsigned long)sizeof(lli);
	printf("The size of a float is: %lu.\n" (unsigned long)sizeof(fl));
	return (0);
}
