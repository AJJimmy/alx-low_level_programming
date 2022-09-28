#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Function that finds the square root of inputted number
 * @num: number
 * @root: root
 *
 * Return: square root or -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	return (root);

	if (root == num / 2)
	return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of n or -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	return (-1);

	if (n == 1)
	return (1);

	return (find_sqrt(n, root));
}
