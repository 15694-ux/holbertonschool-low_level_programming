#include <stdio.h>
/**
 * This is a simple calculator for the purposes of Holbertons Software Engineering sprint
 * 
 * Authored and created by Jack Brincat, completed as at 15/11/2026
 *
 * This is to demonstrate ability to code a program following specifications and 
 * applying my knowledge to do so
 *
 * main - The primary body of the program
 * @s1: First input
 * @s2: Second input
 * @result: Sum of s1 and s2
 * @op: Stores operators
 * @again: Used to allow for repeated calculations without program ending
 * Return: Always 0 upon completed action, otherwise loops with break
 */
int main(void)
{
	double s1; /* Stores inputs in decimal places */
	double s2; /* Instead of int using wholes, double to use decimal places */
	double result; /* Stores the sum of s1 and s2 */
	char op; /* Stores operators */
	char again; /* Variable to repeat calculations without end program operations */

	again = 'y'; /* Sets Y/y as valid inputs for repeat, other inputs return 0 */

	while (again == 'y' || again == 'Y') /* Allows for repeated calculations */
	{
		printf("\nEnter your calculation using only +, -, *, and /: "); /* Input request with defined operators */
		if (scanf("%lf %c %lf", &s1, &op, &s2) != 3) /* Scanf to read user input and store values */
		{
			printf("Invalid input.\n"); /* In the event of invalid input */
			break;
		}

		switch (op) /* Opted to use switch in place of if / else bloat */
		{
			case '+': /* Case will read for specified inputs to run */
				result = s1 + s2;
				break;
			case '-':
				result = s1 - s2;
				break;
			case '*':
				result = s1 * s2;
				break;
			case '/':
				if (s2 == 0) {
					printf("Impossible request: Can not divide by 0.\n"); /* Safety net from dividing by 0 */
					break;
				}
				result = s1 / s2;
				break;
			default: /* If input does not match a case, it will run default */
				printf("Unknown operator '%c'.\n", op); /*Message stating error */
				break;
		}
		
		printf("%f %c %f = %f\n", s1, op, s2, result); /* Prints result */
		
		printf("Make another calculation? (Y/N): "); /* Asks for repeated operations */
                	scanf(" %c", &again);
	}

	printf("Thank you for using my calculator, have a pleasant day.\n"); /* Exit message for return 0 */
	return 0;	
}
