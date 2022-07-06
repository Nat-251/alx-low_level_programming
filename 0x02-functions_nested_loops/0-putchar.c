#include "main.h"

/**
 * main -> Write a program that prints _putchar,
 *  followed by a new line.
 *
 * Return: On success 0
*/
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
