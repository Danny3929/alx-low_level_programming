#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n : integer
 * Return : null
 */

void print_to_98(int n)
{
	for (n = 0 ; n <= 98 ; n++)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
}
