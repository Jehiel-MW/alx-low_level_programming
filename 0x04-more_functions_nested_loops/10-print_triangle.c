#include "main.h"

/**
* print_triangle -> this program must run successfully the size of a triangle
* @size: print the size of a triangle
* Return: always 0 (success)
*/

void print_triangle(int size)
{
int i, j, s;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
s = size - i - 1;
if (j < s)
_putchar(' ');
else
_putchar(35);
}
_putchar('\n');
}
}
}
