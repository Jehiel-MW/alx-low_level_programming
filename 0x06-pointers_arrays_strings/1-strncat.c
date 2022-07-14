#include "main.h"
#include <stdio.h>

/**
* _strlen - this program returns the lenght of a string
* @s: this represents pointer of character
* Return: the length of a string
*/
int _strlen(char *s)
{
int len;

len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}

/**
* *_strncat - this program will concatenates two strings
* @dest: this represents a string to print
* @src: this represents the string origin
* @n: this represents number of bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, len;

len = _strlen(dest);
for (i = 0; (i < n && src[i] != '\0'); i++)
{
dest[len + i] = src[i];
}
return (dest);
}
