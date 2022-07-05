#include "main.h"

/**
* print_alphabet_x10.c -> print the alphabets from a-z
* Return: always 0 (success)
*/

void print_alphabet_x10(void)
{
char n;
char p;

for (p = 0 ; p <= 9 ; p++)
{
for (n = 'a' ; n <= 'z' ; n++)
{
_putchar(n);
}
}
_putchar('\n');
}
