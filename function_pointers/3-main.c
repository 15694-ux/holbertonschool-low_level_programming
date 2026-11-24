#include "3-calc.h"
/**
 * main - Performs simple operations
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 on success
 */
int main(int argc, char *argv[]) /** Main function **/
{
	int a, b;
	int (*func)(int, int); /** Initialize variables **/

	if (argc != 4) /** Set if parameters **/
	{
		printf("Error\n"); /** If parameters met, error out **/
		exit(98); /** Exit code **/
	}

	func = get_op_func(argv[2]); /** Assign func **/
	if (func == NULL) /** Set if paremeters for func **/
	{
		printf("Error\n"); /** If paremeters met, error out **/
		exit(99); /** Exit code **/
	}

	a = atoi(argv[1]); /** Assign atoi to variables **/
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0) /** Rule for 0 div **/
	{
		printf("Error\n"); /** If parameters met, error out **/
		exit(100); /** Error code **/
	}
	printf("%d\n", func(a, b)); /** Print successful calculations **/
	return (0); /** Successful return **/
}
