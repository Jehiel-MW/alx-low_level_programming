#include "main.h"

/**
* times_table -> Prints the 9 times table, starting with 0
* @void: multiplication table 0-9
* Return: 0 (success)
*/

void times_table(void)
{
int r, c;
int d, u;
int mul;
for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
mul = r * c;
if (mul >= 10)
{
d = mul / 10;
u = mul % 10;
_putchar(' ');
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (c != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(mul + '0');
}
if (c != 9)
_putchar(',');
if (c == 9)
_putchar('\n');
}
}
}
