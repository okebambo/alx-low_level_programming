#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		int i;

		i = 'a';

		while (i <= 'z')
		{
			_putchar (i);
		}
		i++;

		_putchar ('\n');
	}

	return (0);
}
