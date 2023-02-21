#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The characters to print
 *
 * Return: On success 1.
 * On erroe, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (white(1, &c, 1));
}
