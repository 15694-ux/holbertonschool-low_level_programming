#include <stdio.h>
/**
 * main - Primary function
 */

int main(void)
{
	int choice; /** Variable initialize **/
	double s1;
	double s2;

	choice = 0;

	while (1) /** Primary while loop **/
	{
		printf("Simple Calculator\n"
		"1) Addition\n"
		"2) Subtraction\n"
		"3) Multiplication\n"
		"4) Division\n"
		"0) Quit\n"
		"Make your selection: ");
		scanf("%d", &choice);

		if (choice == 1) /** Addition **/
		{
			printf("First input: ");
			scanf("%le", &s1);
			printf("Second input: ");
			scanf("%le", &s2);
			printf("%.2f + %.2f = %.2f\n",s1, s2, s1 + s2);
		}
		else if (choice == 2) /** Subtraction **/
		{
			printf("First input: ");
                        scanf("%le", &s1);
                        printf("Second input: ");
                        scanf("%le", &s2);
			printf("%.2f - %.2f = %.2f\n", s1, s2, s1 - s2);
		}
		else if (choice == 3) /** Multiplication **/
		{
			printf("First input: ");
                        scanf("%le", &s1);
                        printf("Second input: ");
                        scanf("%le", &s2);
                        printf("%.2f * %.2f = %.2f\n", s1, s2, s1 * s2);
		}
		else if (choice == 4) /** Division **/
		{
			printf("First input: ");
                        scanf("%le", &s1);
                        printf("Second input: ");
                        scanf("%le", &s2);
                        printf("%.2f / %.2f = %.2f\n", s1, s2, s1 / s2);

			if (s2 == 0) /** Safety-net for Divide by 0 **/
                        {
                                printf("Invalid operation: Unable to divide by 0\n");
                        }
		}
		else if (choice == 0) /** Exit command **/
		{
			printf("Thank you for using this program, have a pleasant day.\n");
			return (0);
		}
		else /** Invalid input response **/
		{
			printf("Invalid selection.\n");
		}
	}
}
