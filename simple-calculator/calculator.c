#include <stdio.h>
/**
 */
int main(void)
{
	int input; /* Initialize input function */

	printf("Simple Calculator\n"); /* Menu for user selection and input */
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Please make a selection.");
	scanf("%d", &input); /* Input line */
	
	if (input == '0') /* Operation commands */
	{
		printf("Exiting now, have a pleasant day.");
		return (0);
	}
	else (input == '1')
	{
		printf("Addition");
		printf("Please enter numbers to add: ");
		scanf(
	else (input == '2')
		printf("Subtraction");
	else (input == '3')
		printf("Multiplication");
	else (input == '4')
		printf("Division");
}
