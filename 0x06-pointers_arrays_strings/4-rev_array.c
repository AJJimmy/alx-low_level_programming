#include "main.h"

/**
 * reverse_array - Program to reverse the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
	temp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = temp;
	}
}
