#include "main.h"
#include <stdio.h>

/**
 * main - prints positive or negative
 * @i: the variable i used
 * Return: always 0
 */

int main(void)
{
	int i;

	i = 0;
{
	printf("%i is zero\n", i);
}
else if (i < 0)
{
	printf("%i is negative\n", i);
}
else
{
	printf("%i is positive\n", i);
}
return (0);
}


