#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * *_strcat - concatenates two strings.
 * @dest: termination
 * @src: appends to the dest string
 * Return: dest
=======
 * *_strcat - Write a function that concatenates two strings.
 * @dest: pointer returns to
 * @src: function to append to dest
 * Return: dest.
>>>>>>> c61751247f53e20c52525959f8885cd37029d993
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
int i, j;

i = 0;
while (dest[i] != '\0')
{
	i++;
}

j = 0;
while (src[j] != '\0')
{
	dest[i] = src[j];
	j++;
	i++;
}
dest[i] = '\0';

=======
char s1[98];
char s2[];

_putchar('%s', s1);
_putchar('\n');
_putchar('%s', s2);
>>>>>>> c61751247f53e20c52525959f8885cd37029d993
return (dest);
}
