#include <stdio.h>

/**
 * main - A program that prints the size of various types
 * Return: 0 (success)
 */

int main(void)

{

	char a;
	int b;
	long b;
	long long int d;
	float f;



	printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long %int byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}

