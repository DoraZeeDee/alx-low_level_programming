#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @x: compares if its upper or lowercase
 * Return: 1 (success)
 */

int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
