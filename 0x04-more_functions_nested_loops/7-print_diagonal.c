#include "main.h"

/**
* print_diagonal -> this is for drawing a diagonal line as an output
* @n: this to rin the number of times \ will be printed
* Return: Nothing
*/

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
else
{
for (j = 1 ; j <= n ; j++)
{
for (i = 2 ; i <= j ; i++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
