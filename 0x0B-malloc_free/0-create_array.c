#include <stdio.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: character that initializes the array
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	int y;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s = NULL)
		return (NULL);

	y = 0;
	while (y < size)
		s[y] = c;
	y++;
	return (s);
}
