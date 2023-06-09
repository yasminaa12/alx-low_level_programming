#include "main.h"

/**
 * _memset  -file memory with a constant byte
 * @n: bytes
 * @s: memory area
 * @b: constant byte
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
