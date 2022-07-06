#include "main.h"

/**
* _abs -> computing the absolute value of given set of data
* @c: compute absolute value of an integer
* Return: 0 (success)
*/
int _abs(int c)
{
if (c < 0)
{
int n;
n = c * -1;
return (n);
}
return (c);
}
