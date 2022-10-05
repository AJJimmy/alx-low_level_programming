#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	printf("%s\n", argv[arg]);

	return (0);
}
