#include <stdio.h>


/**
* main -> assign a random number to the variable n each time it is execute
* Return: always 0
*/
int main(void)
{
int i;
for (i = 48 ; i <= 57 ; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
