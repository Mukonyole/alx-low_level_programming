#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - prints sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - prints difference between two numbers.
 * @a: first number.
 * @b: second number.
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - prints results of multiplication of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: multiplication results of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - prints division results of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: Divion results of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - prints remainder of division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: remainder of division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
