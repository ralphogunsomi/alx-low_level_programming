#include "main.h"
/**
 * print_alphabet_x10 - print all the alphabets ten times
 */
void print_alphabet_x10(void)
{
	int get;
	char lett;

	int get = 0;

	while (get++ <= 9)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
			_putchar(lett);

		_putcher('\n');
	}
}
