#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = n - 1 ; a < n && a[b] != '\0' ; b--)
	{
		a[b];
	}
	return (a);
}
