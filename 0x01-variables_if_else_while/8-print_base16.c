#include <stdio.h>
#include <ctype>
/**
 * main - print all numbers under base sixteen
 *
 * Return: always 0
 */
int main(void)
{
	int num_16;

	for (num_16 = 0; num_16 < 16; num_16++)
	{
		putchar(num_16);
	}
	putchar('\n');

	return (0);
}
