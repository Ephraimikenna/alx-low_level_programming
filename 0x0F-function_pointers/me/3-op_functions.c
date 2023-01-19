#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum
 * op_sub - returns diff
 * op_mul - returns products
 * op_div - returns div
 * op_mod - returns returns remainder to the div
 * @a: sum
 * @b: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two values
 * @a: difference of a and b
 * @b: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple of a and b
 * @a: multi of a and b
 * @b: multi of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div of two values
 * @a: div of the values
 * @b: div f
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder to the values
 * @a: a % b
 * @b:a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
