#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n : if its lower than 0 return -1
 * factorial 0 is 1
 * Return : factorial of a given number
 */

int factorial(int n)
{
	if (n = 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return(-1);
}
