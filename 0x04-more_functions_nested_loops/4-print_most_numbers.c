#include "main.h"
/**
 *print_most_numbers - prints numbers except 2 and 4
 *Return: returns nothing
 */
void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if ((number == 58) || (number == 52))
		{
			continue;
		}
		_purchar(number);
	}
	_putchar(10);
}