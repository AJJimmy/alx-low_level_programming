#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	return (-1);

	for (index = 0; index < size; index++)
	{
	if (cmp(array[index]) != 0)
	return (index);
	}

	return (-1);
}
