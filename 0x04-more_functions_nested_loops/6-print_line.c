#include "main.h"

/**
* print_line -> this is to draw a straight line using _
* @n: to draw a straight line at n number of times
* Return: Nothing
*/

void print_line(int n)
{
int i;

if (n <= 0)
_putchar('\n');
else
{
for (i = 1 ; i <= n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
