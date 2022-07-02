#include <stdio.h>

/**
* main -> project on hexadecimal
* Return: always 0
*/
int main(void)
{
int i;
char ch;
for (i = 1; i <= 16; i++)
{
putchar(i);
}
for (ch = 'a'; ch = 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
