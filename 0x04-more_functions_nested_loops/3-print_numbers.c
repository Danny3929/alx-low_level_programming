#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print numbers from 0-9
 * @void: integer
 * Return:Always 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
