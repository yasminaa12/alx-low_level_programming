#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the difference of two num
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return the product of two num
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return the division of two num
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Return the remainder of the division of two num
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
