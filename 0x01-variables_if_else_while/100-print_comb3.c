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

	for (digit1 = 0; digit2 < 89; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);

}

