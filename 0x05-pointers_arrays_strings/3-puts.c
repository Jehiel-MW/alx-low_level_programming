#include "main.h"

/**
* _puts -> printing a string followed by a new line
* @str: string to print
* Return: always 0 (success)
*/

void _puts(char *str)
{
int i;

for (i = 0 ; *(str + i) != 0 ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
