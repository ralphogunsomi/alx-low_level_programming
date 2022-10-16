#include <stdio.h>
/**
 * main - write numberts to base ten
 *
 * Return: always 0
 */
int main(void)
{
	int number;

	number = 0;

	for (number < 10)
	{
		number++;
		printf("the numbers are %d:", number);
	}
	return (0);
}
