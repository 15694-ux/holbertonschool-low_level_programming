#ifndef CALC_H
#define CALC_H

/**
 * Above lines used to protect from double inclusion
 * formatted this way because betty was getting angry
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 * @op: Operator variable
 * @f: Associated function
 */
typedef struct op /** Struct for op call **/
{
	char *op; /** Char var for op call **/
	int (*f)(int a, int b); /** Int var for func call and op use **/
} op_t; /** Struct / Alias call **/

int op_add(int a, int b); /** Addition **/
int op_sub(int a, int b); /** Subtraction **/
int op_mul(int a, int b); /** Multiplication **/
int op_div(int a, int b); /** Division **/
int op_mod(int a, int b); /** Remainder **/
int (*get_op_func(char *s))(int, int); /** Func to call and execute calc **/

#endif /** End of double call protection **/
