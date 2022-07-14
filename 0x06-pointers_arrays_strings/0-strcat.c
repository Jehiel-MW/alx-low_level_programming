#include "main.h"
/**
* *_strcat -> the program concatenates two strings
* @dest: this represents string to dest
* @src: this represrnts string origin
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
return (dest);
}
