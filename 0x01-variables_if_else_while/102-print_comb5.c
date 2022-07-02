#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
*
*Return: Always 0 (success)
*/
int main(void)
{
int w, x, y, z;
for (w = '0' ; w <= '9' ; w++)
{
for (x = '0' ; x <= '9' ; x++)
{
for (y = '0' ; y <= '9' ; y++)
{
for (z = '0' ; z <= '9' ; z++)
{
if (w < y || (w == y && x < z))
{
putchar(w);
putchar(x);
putchar(' ');
putchar(y);
putchar(z);
if (w == '9' && x == '8' && y == '9' && z == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar(10);
return (0);
}	
