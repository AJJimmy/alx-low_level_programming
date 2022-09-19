#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	length++;
	return (length);
}
