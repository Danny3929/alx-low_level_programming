#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Void
 *
 */

void print_alphabet(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
