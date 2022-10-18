#include <stdio.h>
#include <ctype.h>
/**
 * main - program that writes the combination of three different digits
 *
 * Return: always 0
 */
int main(void)
{
	/*variables declaration*/

	int n1;
	int n2;
	int n3;

	/*using for loop to initialize variables*/

	for (n1 = 0; n1 < 8; n1++)
	{
		for (n2 = n1 + 1; n2 < 9; n2++)
		{
			for (n3 = n2 + 1; n3 < 10; n3++)
			{
				putchar((n1 % 10) + '0');
				putchar((n2 % 10) + '0');
				putchar((n3 % 10) + '0');

				/*using conditional if statement to define the output*/

				if (n1 == 7 && n2 == 8 && n3 == 9)

					continue;
				/*adding commas and spaces in between the digits*/

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
