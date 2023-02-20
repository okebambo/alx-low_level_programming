#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - task #0
 *
 * Description: 0-positive_or_negative.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n == 0)
					printf("%d zero\n", n);
					return (0);
}
