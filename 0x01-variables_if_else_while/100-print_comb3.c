#include <stdio.h>
#include <ctype.h>
/**
 * main - print all possible difference of two numbers
 *
 * Return: always 0
 */
int main(void)
{
	/*declaring variables*/

	int n1;
	int n2;

	/* using a for loop*/

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar((n1 % 10) + '0');
			putcher((n2 % 10) + '0');
			/*using logical operations*/

			if (n1 == 8 && n2 == 9)
				continue;
			/*adding comma and spaces in between numbers*/

			putchar(',');
			putchar(' ');
		}
		putchar('\n');

		return (0);
	}
