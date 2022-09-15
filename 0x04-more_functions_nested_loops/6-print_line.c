#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the variable to use
 * Return: always 0
 */

void print_line(int n)
{

	while (n <= 10)
	_putchar('_');

	if (n <= 0)
		_putchar('\n');

}
