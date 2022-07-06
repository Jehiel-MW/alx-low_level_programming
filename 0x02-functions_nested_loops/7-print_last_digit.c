#include "main.h"

/**
* print_last_digit -> this is to print all last digit
* @n: printing the value of digit
* Return: last digit (success)
*/

int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
