#include <stdio.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @c : integer
 * Return: Always 0
 */

int _abs(int c)
{
	if (c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return (c);
}
