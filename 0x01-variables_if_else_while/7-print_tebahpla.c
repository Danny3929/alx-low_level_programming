#include <stdio.h>

/**
 * main - entry
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}

