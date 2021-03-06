#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle followed by a line
 * @size: integer
 * Return: Always 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <=  0)
		_putchar('\n');

	for (a = 0 ; a < size ; a++)
	{
		for (b = size - a ; b > 1 ; b--)
		{
			_putchar(' ');
		}
		for (c = a + b ; c >= 1 ; c--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
