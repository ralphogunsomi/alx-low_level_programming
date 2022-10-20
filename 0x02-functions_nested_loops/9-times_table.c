#include "main.h"
/**
 * times_table - Prints the 9 times table
 *Return: no return
 */
void times_table(void)
{
	int num, b, p;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);

		for (b = 1; b <= 9; b++)
		{
			p = num * b;
			_putchar(44);
			_putchar(32);
			if (p <= 9)
			{
				_putchar(32);
				_putchar(p + 48);
			}
			else
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
