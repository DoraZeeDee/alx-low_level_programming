#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: the pointer to an int that will be changed
 * Return: always 0
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}

