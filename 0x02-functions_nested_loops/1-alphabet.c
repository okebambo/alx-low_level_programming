#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar (i);
	}
	i++;

	_putchar ('\n');

	return (0);
}
