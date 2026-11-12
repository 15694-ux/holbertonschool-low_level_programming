#include "main.h"
/**
 * rev_string - reverses a string into output
 * @s: value to check
 */
void rev_string(char *s)
{
	int a;
	int b;
	int tmp;
	char t;

	tmp = 0;

	while (s[tmp] != '\0')
	{
		tmp = tmp + 1;
	}
	a = 0;
	b = tmp - 1;

	while (a < b)
	{
		t = s[a];
		s[a] = s[b];
		s[b] = t;

		a = a + 1;
		b = b - 1;
	}
}
