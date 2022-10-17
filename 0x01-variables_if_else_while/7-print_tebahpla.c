#include <stdio.h>
#include <ctype.h>
/**
 * main - write alphabets in reverse oder
 *
 * Return: always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		alpha = tolower(alpha);
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
