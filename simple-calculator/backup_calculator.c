#include <stdio.h>
/**
 * main - Primary function
 */

int main(void)
{
	int choice;
	int x;
	char op;
	char again;
	double s1;
	double s2;
	double result;

	choice = 0;
	x = 1;
	again = 'y';
	
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
		
		if (scanf("%le %c %le", &s1, &op, &s2) != 3)
		{
			printf("Invalid input.\n");
			break;
		}
		
		
		if (choice == 0)
		{
			x = 0;
			printf("Exiting program\n");
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid input: \n");
			scanf("%d", &choice);
		}
		else
		{
			printf("First input: ");
			scanf("%le", &s1);
			printf("Select operator: ");
			scanf("%c", &op);
			printf("Second input: ");
			scanf("%le", &s2);
		}
		if (choice == 4 && s2 == 0)
		{
			printf("Invalid operation: Unable to divide by 0\n");
		}
		else switch(choice)
		{
			case 1:
				result = (s1 + s2);
				break;
			case 2:
				result = (s1 - s2);
				break;
			case 3:
				result = (s1 * s2);
				break;
			case 4:
				result = (s1 / s2);
				break;
		}
		printf("%f %c %f = %f\n", s1, op, s2, result);
		
		printf("Make another calculation? (Y/N): ");
		scanf(" %c", &again);
		
		}
	printf("Thank you for using this program, have a pleasant day.\n");
	return 0;
}	
