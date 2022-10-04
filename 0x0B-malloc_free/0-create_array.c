#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars
 * @size: size of the array
 * @c: specific char
 *
 * Return: 0, NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	return (NULL);

	for (index = 0; index < size; index++)
	array[index] = c;

	return (array);
}
