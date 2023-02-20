#include <stdio.h>
/**
 * main - 9-print_comb.c
 *
 * Description: 9-print_comb.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	i = 0;
	while (1 <= 9)
	{
		putchar (i);
		putchar (',');
		putchar (' ');
	}
	i++;

	return (0);
}
