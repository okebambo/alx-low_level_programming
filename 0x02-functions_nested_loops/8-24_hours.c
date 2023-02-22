#include "main.h"

/**
 * jack_bauer- 8-24_hours.c
 *
 * Description: 8-24_hours.c
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar (i);
			_putchar (':');
			_putchar (j);
		}
	}
}
