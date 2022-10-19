#include "main.h"
/**
 * print_alphabet -print all alphabets in lower cases.
 * 
 */
void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		_putchar(lett);

	_putchar('\n');
}
