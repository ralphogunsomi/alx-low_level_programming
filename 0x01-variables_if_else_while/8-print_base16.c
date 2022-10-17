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
	char alpha;

	for (num = '0'; num < '10'; num++)
	{
		putchar(num);
	}

	for (alpha = 'a'; alpha < 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
