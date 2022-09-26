#include "main.h"

/**
 * _memset - Function that fills the first n bytes of the memory area
 * @s: pointer to the memory area
 * @b: constant
 * @n: maximum bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
	s[i] = b;
	}

	return (s);
}
