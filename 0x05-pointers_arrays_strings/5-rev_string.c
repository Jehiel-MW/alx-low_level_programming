#include "main.h"

/**
* rev_string - reversing strings
* @s: string to reverse
* Return: always 0 (success)
*/

void rev_string(char *s)
{
int len, i;
char l;

len = 0;
while (*(s + len) != '\0')
len++;
len--;
for (i = 0; i < len; i++)
{
l = *(s + len);
*(s + len) = *(s + i);
*(s + i) = l;
len--;
}
}
