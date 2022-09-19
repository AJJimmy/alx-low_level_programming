#include "main.h"

/**
 * swap_int - Function to swap values of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
