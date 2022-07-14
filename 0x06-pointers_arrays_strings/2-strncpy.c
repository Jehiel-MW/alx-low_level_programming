#include "main.h"

/**
* _strncpy - the program is to copy a string
* @dest: it represents string dest
* @src:  it represents origin to copy
* @n: it represents number of bytes
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, l = 0;

for (i = 0; (i != n && src[i] != '\0'); i++)
{
dest[l] = src[i];
l++;
}
while (l != n)
dest[l++] = '\0';
return (dest);
}
