#include "main.h"

/**
 * puts2 - print something
 * @str: string to check
 * Return: 0 at success
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
