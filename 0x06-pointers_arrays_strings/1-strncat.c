#include "main.h"
#include <stdio.h>

/**
* *_strncat - this program will concatenates two strings
* @dest: this represents a string to print
* @src: this represents the string origin
* @n: this represents number of bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
