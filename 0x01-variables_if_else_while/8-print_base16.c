#include <stdio.h>
#include <ctype.h>
/**
 * main - print all numbers under base sixteen
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num < '16'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
