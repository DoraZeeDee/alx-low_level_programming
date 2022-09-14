#include "main.h"

/**
 *  print_alphabet_x10 - print alphabet ten times
 *
 *    Result: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char x;
	int x10;

	x10 = 0;
	while (x10 < 10)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
		x10++;
		_putchar('\n');
	}

}
