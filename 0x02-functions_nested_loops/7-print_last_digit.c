#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c : integer
 * Return: Always 0
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -(a % 10);
	}
	else if (a > 0)
	{
		a = a % 10;
	}
	else
	{
		a = 0;
	}
	return (a);
}
