#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return : dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;

	int b;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0 ; b < n && src[b] != '\0' ; b++ ,a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
