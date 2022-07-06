#include "main.h"

/**
*jack_bauer -> print the hours of the day
* @void: printing the hours in a day
* Return: 0 (success)
*/

void jack_bauer(void)
{
int l, m;
for (l = 0 ; l < 24 ; l++)
{
for (m = 0 ; m <= 59 ; m++)
{
if (l < 10)
{
_putchar('0');
_putchar(l + '0');
}
else if (l >= 10)
{
_putchar((l / 10) + '0');
_putchar((l % 10) + '0');
}
if (m <= 1)
{
_putchar(':');
_putchar('0');
_putchar(m);
}
else if (m >= 10)
{
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
}
_putchar('\n');
}
}
}
