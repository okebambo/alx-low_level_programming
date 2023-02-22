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
			if (i < 9)
			{
				_putchar ('0' + i);
			}
			else
			{
				_putchar (i);
			}
			_putchar (':');
			if (j < 10)
			{
				_putchar ('0' + j);
			}
			else
			{
				_putchar (j);
			}
			_putchar ('\n');
		}
	}
}
