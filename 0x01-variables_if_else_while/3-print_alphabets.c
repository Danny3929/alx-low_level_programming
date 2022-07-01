#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ch;

	int CH;

	for (ch = 'a', CH = 'A' ; ch <= 'z' , CH <= 'Z' ; ch++ , CH++);
	putchar(ch);
	putchar(CH);
	putchar('\n');
	return (0);
}
