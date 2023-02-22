#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet
 * Description : 1-alphabet.c
 * Return: void
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
}
