#include "main.h"

/**
 * _isupper - Program to check for uppercase character
 * @c: letter
 *
 * Return: 1 if the character is uppercase otherwise returns 0 if it is not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);
}
