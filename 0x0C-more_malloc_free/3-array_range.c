#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: first value
 * @max: last value
 *
 * Return: NULL or a pointer
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	return (NULL);

	for (index = 0; index < size; index++)
	array[index] = min++;

	return (array);
}
