#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
	{
		int n;
		Srand(time(0));
		n = rad() - RAND_MAX / 2;
		if (n==0)
			print("%d is zero\n", n);
		else if (n<0)
			printf("%d is negative\n", n);
		else
			printf("%d is positive\n", n);
		return(0);
	}
