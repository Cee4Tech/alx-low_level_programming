#include <stdio.h>

/**
 * main - print 1 to 100, except certain multiples
 *
 * Description: print numbers 1 to 100, if number
 * is multiple of 3 print "Fizz" instead, if number
 * is multiple of 5 print "Buzz" instead, if number
 * is mulptiple of 3 and 5 print "FizzBuzz"
 * Return: 0 on Success
 */
int main(void)
{
	int i = 2, j = 1;

	printf("%d", j);

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}

TASK 10.

#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
