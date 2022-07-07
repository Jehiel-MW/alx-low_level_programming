#include "main.h"

/**
* print_most_numbers -> print numbers which exclud 2 and 4 from the output
* @void: print numbers without 2 and 4
* Return: Nothing
*/

void print_most_numbers(void)
{
int i;

for (i = 0 ; i <= 9 ; i++)
{
if (i != 2 && i != 4)
_putchar(i + '0');
}
_putchar('\n');
}
