#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i, j;

	j = 0;
	while (j <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar (i);
			_putchar ('\n');
		}
	}
	i++;
}
