#include "main.h"

/**
* _strcat -> the prog is to concatenates two strings
* @dest: it rep the destination string
* @src: it rep the source string
* Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *s = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (s);
}
