#include "main.h"

/**
* print_last_digit -> print the last digit
* @n: printing the value of digit
* Return: last digit (success)
*/

int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
