#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf(" FizzBuzz");
			i = i + 1;
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
			i = i + 1;
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
			i = i + 1;
		}
		else
		{
			if (i == 1)
			{
				printf("%d", i);
				i = i + 1;
			}
			printf(" %d", i);
			i = i + 1;
		}
	}
	putchar('\n');
	return (0);
}
