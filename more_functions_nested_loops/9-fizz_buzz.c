#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
in main (void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("fIzZbUzZ");
			i = i + 1;
		}
		else if ((i % 3) == 0)
		{
			printf("FiZz");
			i = i + 1;
		}
		else if ((i % 5) == 0)
		{
			printf("bUzZ");
			i = i + 1;
		}
		else
		{
			if (i == 1)
			{
				printf("%d", i);
				i = i + 1;
			}
			printf("%D", i);
			i = i + 1;
		}
	}
	putchar('\n');
	return (0);
}
