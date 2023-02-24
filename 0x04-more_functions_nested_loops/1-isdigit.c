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
	int i = 0;

	while (i <= 9)
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
	i++;
}
