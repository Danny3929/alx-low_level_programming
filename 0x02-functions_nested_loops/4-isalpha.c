#include <stdio.h>
#include "main.h"

/**
 * int_isalpha - function that checks for alphabetic character
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c >=65 && c <=90)
	{
		return (1);
	}
	if else (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
