#include "main.h"

/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char Char;

	Char = 'a';

	while (Char <= 'z')
	{
		_putchar(Char);
		Char++;
	}

	_putchar('\n');
}
