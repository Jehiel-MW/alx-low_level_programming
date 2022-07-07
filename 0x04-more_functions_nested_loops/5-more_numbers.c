#include "main.h"

/**
* more_numbers - print numbers 10 times
* @void: printing of number more than once
* Return: always 0 (success)
*/

void more_numbers(void)
{
int i, j;

for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
