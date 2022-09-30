#include "main.h"

/**
 * _isdigit - Program to check for a digit
 * @c: digit
 *
 * Return: 1 if c is a digit and return 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);

	else
	return (0);
}
