#include "main.h"

/**
 * print_line - Program to print a straight line
 * @n: number of times the character _ is printed
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
	_putchar('_');
	i++;
	}
	_putchar('\n');
}
