#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line.
 * @x: the variable
 * Return: always 0
 */

void print_square(int x)
{
	int i = 0, ii;

	while (i < x && x > 0)
	{
		ii = 0;
		while (ii < x)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
