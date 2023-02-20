#include <stdio.h>
/**
 * main - 100-print_comb3.c
 *
 * Description: 100-print_comb3.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	i = 0;
	while (i < 100)
	{
		if (i <= 9)
		{
			putchar ("%02d", i);
		}
		i++;
		putchar (i);
	}
	i++;

	return (0);
}
