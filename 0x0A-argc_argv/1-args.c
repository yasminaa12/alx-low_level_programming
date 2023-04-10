#include <stdio.h>
#include "main.h"

/**
 * main - print a number of argumment passed to the program
 * @argc: count argumments
 * @argv: array of argumments
 *
 * Return: always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
