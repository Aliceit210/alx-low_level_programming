#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @k: String to print
 * Return: nothing.
 */

void print_rev(char *k)
{
	int i = 0;

	while (*(k + i) != '\0')
		i += 1;
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(k + i));
		i--;
	}
	_putchar('\n');
}
