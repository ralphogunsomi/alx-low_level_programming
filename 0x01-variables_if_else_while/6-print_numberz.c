#include <stdio.h>
#include <ctype.h>
/**
 * main - print all single digit numbers under base ten
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
