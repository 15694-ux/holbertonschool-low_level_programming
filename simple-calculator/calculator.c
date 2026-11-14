#include <stdio.h>
/**
 */
int main(void)
{
	int input; /* Initialize input function */
	int s1;
	int s2;
	int d;
	int result;

	result = s1 + s2 || s1 - s2 || s1 * s2 || s1 / s2;
	d  = input;

	printf("Simple Calculator\n"); /* Menu for user selection and input */
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Please make a selection.");
	scanf("%d", &input); /* Input line */
	
	if (input == '1') /* Operation commands */
	{
		printf("Addition");
                printf("Please enter numbers to add: ");
                scanf("%d", "%d", s1, s2);

                return (results);
	}
	else if (input == '2')
	{
		printf("Subtraction");
                printf("Please enter numbers to subtract: ");
                scanf("%d", "%d", s1, s2);

                return (results);

	else if (input == '3')
	{
		printf("Multiplication");
		printf("Please enter numbers to multiply: ");
		scanf("%d", "%d", s1, s2);

		return (result);
	}
	else if (input == '3')
	{
		printf("Division");
		printf("Please enter numbers to dicide: ");
		scanf("%d", "%d", s1, s2);

		return (results);
	}
	else (input == '0')
        {
                printf("Exiting now, have a pleasant day.");
                return (0);
	}
}
