#include "main.h"

/**
 * *_strncat - Program to concatenate two strings
 * @dest: First string
 * @src: Second string
 * @n: number of bytes
 *
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	dest_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];

	return (dest);
}
