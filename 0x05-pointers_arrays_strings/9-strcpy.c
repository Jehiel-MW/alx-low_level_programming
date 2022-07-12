#include "main.h"

/**
* *_strcpy -  the program is to copy the string pointed
* @dest: represent copy of the string
* @src: represent origin of the string
* Return: dest destine copies
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
