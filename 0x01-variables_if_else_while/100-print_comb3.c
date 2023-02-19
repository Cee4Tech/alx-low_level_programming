#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits numbers,
 * ranging from 0-99, seprated by a comma followed by a space.
 *
 * Return: 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit2 <= 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchart((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' '0);

		}
	}

	putchar('\n');

	return (0);

}

