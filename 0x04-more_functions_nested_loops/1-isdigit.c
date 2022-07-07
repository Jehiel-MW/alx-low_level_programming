#include "main.h"

/**
* _isdigit -> checking the output to be a number
* @c: to check if c is a number
* Return: 1 or 0 depending on the condition (success)
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
