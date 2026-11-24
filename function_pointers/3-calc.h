#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Main structure for calculator
 *
 * @op: Operator variable
 * @f: Associated function
 */
typedef struct op /** Struct for op **/
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b); /** Addition **/
int op_sub(int a, int b); /** Subtraction **/
int op_mul(int a, int b); /** Multiplication **/
int op_div(int a, int b); /** Division **/
int op_mod(int a, int b); /** Remainder **/
int (*get_op_func(char *s))(int, int); /** Func to call and execute calc **/

#endif /** CALC_H **/
