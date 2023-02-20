#include <stdio.h>
/**
 * main - 4-print_alphabt.c
 *
 * Description: 4-print_alphabt.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
		if (i == 'e' || i == 'q')
		{
			i++;
		}
	{
		putchar (i);
		i++;
	}
	putchar ('\n');

	return (0);
}
