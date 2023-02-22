#include "main.h"

/**
 * print_times_table - print timea table of 100
 * @n: print_times_table
 * Return: always 0
 *
 */

void print_times_table(int n)
{
	int numb, mult, res;

	if (n >= 0 && n <= 15)
	{
		for  (numb = 0; numb <= n; numb++)
		{
			_putchar ('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar (',');
				_putchar (' ');

				res = numb * mult;
				if (res <= 99)
				{
					_putchar (' ');
				}
				if (res <= 9)
				{
					_putchar (' ');
				}
				if (res >= 100)
				{
					_putchar ((res / 100) + '0');
					_putchar ((res / 10) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar ((res / 10) + '0');
				}
				_putchar ((res) + '0');
			}
			_putchar ('\n');
		}
	}
}
