#include<stdio.h>

/**
* main - Outputs a character string to STDERR using fprintf.
*
* Return: Always 0
*/
int main(void)
{

char r[99] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

fprintf(stderr, "%s", r);

return (1);
}
