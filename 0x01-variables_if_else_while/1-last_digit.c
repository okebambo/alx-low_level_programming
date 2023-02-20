#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - print last digit in random number
 *
 * Description: print last digit in random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (last > 5)
		printf("Last digit of n is %d and is greater than 5", n);
	else if (last == 0)
		printf("Last digit of n is %d and is 0", n);
	else
		printf("Last digit of n is %d and is less than 6 and not 0", n);

	putchar ('\n');

	return (0);
}
