#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - is the entry point of this program
 *
 * Return: always 0 (success)
 * positive anything is better than negative nothing
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
