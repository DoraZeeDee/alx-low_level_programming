#include <stdio.h>
#include <stdlib.h>

/**
*main - prints its name, followed by a new line.
*@argc: count arg
*@argv: vector arg
*Return: always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
