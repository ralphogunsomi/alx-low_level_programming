#include <stdio.h>
#include <ctype.h>
/**
 * main - print single numbers
 *
 * Return: always 0
 */
int main(void)
{
	int s_num;

	for (s_num = 0; s_num <= 9; s_num++)
	{
		putchar((num % 10) + '0');
		if (s_num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
