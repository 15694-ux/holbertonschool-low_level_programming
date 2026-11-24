#include "3-calc.h"
/**
 * get_op_function - Selects function matching operator
 * @s: Operator passed as argument to program
 * Return: Pointer to matching function, NULL if no match
 */
int (*get_op_func(char *s))(int, int) /** Function **/
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /** Assigned operators **/
	};
	int i; /** Initialize i **/

	i = 0; /** Set to 0 **/
	while (ops[i].op != NULL) /** Setting while loop parameter **/
	{
		if (strcmp(ops[i].op, s) == 0) /** Setting if loop parameter **/
			return (ops[i].f); /** Setting return parameter **/
		i = i + 1; /** Iterating based on parameters **/
	}
	return (NULL); /** Return parameter **/
}
