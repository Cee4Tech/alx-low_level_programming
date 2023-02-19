#include <stdio.h>

/**
 * main - Print lowercase aphabvet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter++)
		putchart(letter);
	putchar('\n');

	return (0);

}
