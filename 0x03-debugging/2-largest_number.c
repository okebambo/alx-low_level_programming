#include "main.h"

/**
 * largest_number - 2-largest_number.c
 *
 * @a: forst number
 * @b: second number
 * @c: third number
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;

		return (largest);
	}
	else if (b > c)
	{
		largest = b;

		return (largest);
	}
	else
	{
		largest = (c);

		return (largest);
	}
}
