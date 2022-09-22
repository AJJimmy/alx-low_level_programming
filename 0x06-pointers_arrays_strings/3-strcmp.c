#include "main.h"

/**
 * _strcmp - Program to compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: negative difference of s1 & s2, 0 or positive difference of s1 & s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
	s1++;
	s2++;
	}

	return (*s1 - *s2);
}
