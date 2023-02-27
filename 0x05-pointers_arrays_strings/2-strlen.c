#include "main.h"

/**
 * _strlen - 2-strlen.c
 * @s: pointer input
 * Return: strlen
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
	{
		a++;
		return (a);
	}
}
