#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @x: compares the values
 * Return: always 0
 */

int _abs(int x)
{
if (x < 0)
{
	return (x * (-1));
}
else if (x == 0)
{
	return (0);
}
else
{
	return (x);
}

}
