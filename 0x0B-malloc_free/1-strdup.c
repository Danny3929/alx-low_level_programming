#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new space with copy of the string
 * @str: the pointer to the original string
 * memory for the new string is obtained with malloc
 * Return: NULL if str = NULL or if insufficient memory is available
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int k = 0, j;
	/**int k is for string str, int j is for string s*/
	char *s;

	if (str == NULL)
		return (NULL);
	while (*(str + k))
		k++;

	s = malloc(sizeof(char) * k);

	for (j = 0 ; j <= i ; j++)
		s[j] = str[j];
	return (s);
	if (s == NULL)
		return (NULL);
}
