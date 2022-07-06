#include "main.h"

/**
* times_table -> Prints the 9 times table, starting with 0
* @void: multiplication table 0-9
* Return: 0 (success)
*/

void times_table(void)
{
int a, b, c, d, x;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c > 9)
{
d = c % 10;
x = (c - x) / 10;
{
_putchar(44);
_putchar(32);
_putchar(x + '0');
_putchar(d + '0');
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
}
_putchar(c + '0');
}
}
_putchar('\n');
}
}
