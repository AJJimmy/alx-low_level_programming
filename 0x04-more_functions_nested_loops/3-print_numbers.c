#include "main.h"

/**
 * print_numbers - Program to print numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
	_putchar(i + '0');
	i++;
	}

	_putchar('\n');
}
