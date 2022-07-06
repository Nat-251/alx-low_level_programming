#include "main.h"

/**
  * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z';)
	{
		_putchar(letter);
		letter++;
	}
		_putchar('\n');
}
