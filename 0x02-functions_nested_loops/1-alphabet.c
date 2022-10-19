#include "main.h"
/**
 * main - prints alphabets in lower cases.
 * Return: always 0
 */
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		_putchar(lett);

	_putchar('\n');

	return (0);
}
