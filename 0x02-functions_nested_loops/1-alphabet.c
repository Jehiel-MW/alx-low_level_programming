#include "main.h"

/**
* print_alphabet -> print the alphabets from a-z
* Return: always 0 (success)
*/

void print_alphabet(void)
{
char n;

for (n = 'a' ; n <= 'z' ; n++)
{
_putchar(n);
}
_putchar('\n');
}
