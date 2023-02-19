#include <stdio>

/**
 * main - Prints the alphabet in loewrcase, and then in uppeercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)

		putchar(letter);

	putchar('\n');

	return (0);
}
