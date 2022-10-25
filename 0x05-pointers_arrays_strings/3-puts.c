#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string
 *@str: string to print
 *On success: return the number of characters printed
 *Description: prints a string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
