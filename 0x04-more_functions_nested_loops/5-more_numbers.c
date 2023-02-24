#include "main.h"

/**
 * more_numbers - more_numbers.c
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
