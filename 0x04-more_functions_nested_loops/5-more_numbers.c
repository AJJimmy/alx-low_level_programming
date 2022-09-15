#include "main.h"

/**
 * more_numbers - Program to print 10 times of 0 - 14
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char n, c;

	int num = 0;

	while (num < 10)
	{
	for (n = 0; n <= 14; n++)
	{
	c = n;
	if (n > 9)
	{
	_putchar('1');
	c = n % 10;
	}
	_putchar('0' + c);
	}

	_putchar('\n');
	num++;
	}
}
