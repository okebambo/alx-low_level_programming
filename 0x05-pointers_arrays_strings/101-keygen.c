#include <stdio.h>
#include  <stdlib.h>
#include <time.h>
/**
 * main - generate random passwor
 * Return: Always zero
 */
int main(void)
{
	char password[84];

	int index = 0, sum = 0, diffhalf1, diffhalf2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\n';

	if (sum != 2772)
	{
		diffhalf1 = (sum - 2772) / 2;
		diffhalf2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			diffhalf1++;
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diffhalf1))
			{
				password[index] -= diffhalf1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diffhalf2))
			{
				password[index] -= diffhalf2;
				break;
			}
		}
	}
	printf("%s", password);

	return (0);
}
