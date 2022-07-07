#include "main.h"

/**
* _isupper -> checks for uppercase character
* @c : character received
* Return: 1 or 0 if we have uppercase character depending on condition
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
