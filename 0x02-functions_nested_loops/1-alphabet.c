#include "main.h"

/**
* main -> print the alphabets from a-z
* Return: always 0 (success)
*/

void print_alphabet(void)
{
int n;

for (n = 'a' ; n <= 'z' ; n++)
{
_putchar(n);
}
_putchar('\n');
return (0);
}
