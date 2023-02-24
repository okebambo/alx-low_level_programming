#include "main.h"

/**
 * print_most_numbers - 4-print_most_numbers.c
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			a++;
		}
		else
		{
			_putchar(a);
		}
	}
}
