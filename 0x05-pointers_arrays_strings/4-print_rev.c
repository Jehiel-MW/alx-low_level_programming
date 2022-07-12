#include "main.h"

/**
* print_rev -> this program is to print a reverse 
* @s: string to reverse
* Return: Nothing
*/

void print_rev(char *s)
{
int n;

n = 0;
while (*(s + n) != '\0')
n++;
n--;
for (; n >= 0; n--)
_putchar(*(s + n));
_putchar('\n');
}
