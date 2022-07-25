#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: pointer to the second string
 * Return: 0 if null is passed and NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	for (i = 0 ; s1[i] != '\0' ; i++)
		s1[i];
	for (j = 0 ; s2[j] != '\0' ; j++, i++)
		s1[i] = s2[j];

	str = malloc(sizeof (char) * i);

	i = 0;
	while (str[i] = s1[i])
		i++;
	return (str);

	if (s1 == NULL)
		return (0);
}
