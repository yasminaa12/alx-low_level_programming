#include <stdio.h>
#include "main.h"
/**
 * main - print all argumments it recives
 * @argc: count argumments
 * @argv: array of argumments
 *
 * Return: always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
