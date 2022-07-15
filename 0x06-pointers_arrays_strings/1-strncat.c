#include "main.h"

/**
* _strncat -> prog that concatenates two strings
* @src: it rep the source of strings
* @dest: it rep the destination of the string
* @n: it rep the length of int
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
continue;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
