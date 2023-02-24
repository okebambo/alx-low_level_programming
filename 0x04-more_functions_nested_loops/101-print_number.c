#include "main.h"

/**
 * print_number - 101-print_number.c
 *
 * @n: 101-print_number input
 *
 * Return: always 0q
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
		_putchar(i % 10 + '0');
}
