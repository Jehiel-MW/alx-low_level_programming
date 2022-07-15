#include "main.h"

/**
* _strncpy -> program function that copies a string
* @src: it rep the source of strings
* @dest: it rep the destination of the string
* @n: it rep the length of int
* Return: pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && *(src + i); i++)
{
*(dest + i) = *(src + i);
}
for (; i < n; i++)
{
*(dest + i) = '\0';
}
return (dest);

}
