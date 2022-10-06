#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: NULL or a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
	return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
	filler[index] = '\0';

	return (mem);
}
