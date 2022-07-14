#include "main.h"
/**
* *_strcat -> the program concatenates two strings
* @dest: this represents string to dest
* @src: this represrnts string origin
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i, lendest, lensrc;

lendest = _strlen(dest);
lensrc = _strlen(src);
for (i = 0; i < lensrc; i++)
{
dest[lendest + i] = src[i];
}
return (dest);
}
