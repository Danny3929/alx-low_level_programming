#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s : string
 * Return : _strlen_recursion
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s);
		s++;
		return(int _strlen_recursion);
	}
	return(0);
}
