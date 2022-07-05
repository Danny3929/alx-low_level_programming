#include <stdio.h>
#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n : is an integer
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
