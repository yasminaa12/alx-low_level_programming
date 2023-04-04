#include "main.h"
/**
 * _islpha - checks for alphabetic character
 * @c : character to check
 *
 * Return: 1 if c is alpha and return 0 otherwise
 */
int _islpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
