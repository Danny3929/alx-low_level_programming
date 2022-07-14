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
	int b, c;

	n = n - 1;
	b = 0;
	while (b <= n)
	{
		c = a[b];
		a[b++] = a[n];
		a[n--] = c;
	}
}
