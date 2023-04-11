#include "main.h"
#include <stdlib.h>

/**
 * str_concat - contactenates two strings
 * @s1: string to conctenate
 * @s2: other string to conctenate
 *
 * Return: pointer to the new string created (Sucess),
 * or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *h;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	h = malloc(sizeof(char) * (len1 + len2 + 1));
	if (h == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < (len1 + len2))
		{
			h[i] = s2[j];
			i++;
			j++;
		}
	}
	h[i] = '\0';

	return (h);
}
