#include "main.h"

/**
* *string_toupper - the program tend to change the case of letters
* @c: it represents all strings to be changed
* Return: string changed
*/
char *string_toupper(char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] = c[i] - 32;
}
return (c);
}
