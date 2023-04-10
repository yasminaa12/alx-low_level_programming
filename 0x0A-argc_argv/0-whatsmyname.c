#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count argumments
 * @argv: argumments
 *
 * Return: always 0 (sucess)
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
