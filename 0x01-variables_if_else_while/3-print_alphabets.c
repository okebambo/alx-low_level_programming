#include <stdio.h>
/**
 * main - 3-print_alphabets.c
 *
 * Description: 3-print_alphabets.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, x;
		i = 'a';
		while (i <= 'z')
		{
			putchar (i);
			i++;
		}

		x = 'A';

		while (x <= 'Z')
		{
			putchar (x);
			x++;
		}

		putchar ('\n');

		return (0);
}
