#include "main.h"

/**
 * string_toupper - Program to change lowercases of a string to uppercases
 * @str: string to be changed
 *
 * Return: 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;

	i++;
	}
	return (str);
}
