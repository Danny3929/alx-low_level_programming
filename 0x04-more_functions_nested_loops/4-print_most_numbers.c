#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers,from
 * @void: integer
 * Return: Always 0
 */

void print_most _numbers(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
