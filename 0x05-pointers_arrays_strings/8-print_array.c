#include "main.h"

/**
 * print_array - Function that prints n elements of an array of integers
 * @a: integer
 * @n: number of elements of the array
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
	printf("%d", a[i]);
	if (n > 0)
	{
	printf(", ");
	}
	}
	printf("\n");
}
