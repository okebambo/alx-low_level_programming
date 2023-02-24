#include "main.h"

/**
 * _isdigit - 1-isdigit.c
 *
 * @c: 1-isdigit.c
 *
 * Return: return c
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
