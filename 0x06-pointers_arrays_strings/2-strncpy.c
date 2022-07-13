#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies one string to another
 * @dest: string
 * @src: string
 * @n: integer
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	a++;

	n++;

	while (a = n)
	{
		dest[a] = src[n];
	}

	return (dest);
}
