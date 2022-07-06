#include "main.h"

/**
* print_alphabet_x10 -> print the alphabets from a-z x10
* @void: printing the alphabet more than once
* Return: always 0 (success)
*/

void print_alphabet_x10(void)
{
char n;
char p;

for (p = 0 ; p < 10 ; p++)
{
for (n = 'a' ; n <= 'z' ; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
