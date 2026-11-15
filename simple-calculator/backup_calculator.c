#include <stdio.h>
/**
 * main - Primary function
 */

int main(void)
{
	int choice;
	int x;
	double s1;
	double s2;

	choice = 0;
	x = 1;
		
	while (x == 1)
	{
		printf("Simple Calculator\n");
		printf("1) Addition\n");
		printf("2) Subtraction\n");
		printf("3) Multiplication\n");
		printf("4) Division\n");
		printf("0) Quit\n");
		printf("Make your selection: ");
		scanf("%d", &choice);
	
		if (choice == 1)
		{
			printf("First input: ");
			scanf("%le", &s1);
			printf("Second input: ");
			scanf("%le", &s2);
			printf("s1 + s2 = %f\n", s1 + s2);
		}
		else if (choice == 2)
		{
			printf("First input: ");
                        scanf("%le", &s1);
                        printf("Second input: ");
                        scanf("%le", &s2);
			printf("s1 - s2 = %f\n", s1 - s2);
		}
		else if (choice == 3)
		{
			printf("First input: ");
                        scanf("%le", &s1);
                        printf("Second input: ");
                        scanf("%le", &s2);
                        printf("s1 * s2 = %f\n", s1 * s2);
		}
		else if (choice == 4)
		{
			printf("First input: ");
                        scanf("%le", &s1);
                        printf("Second input: ");
                        scanf("%le", &s2);
                        printf("s1 / s2 = %f\n", s1 / s2);
		}
		if (choice == 4 && s2 == 0)
		{
			printf("Invalid operation: Unable to divide by 0\n");
			return (1);		
		}
		else 
		{
			printf("Thank you for using this program, have a pleasant day.\n");
			return (0);
		}
	}
}
