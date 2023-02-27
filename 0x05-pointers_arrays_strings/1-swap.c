#include "main.h"


/**
 * swap_int - change of numbers
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
