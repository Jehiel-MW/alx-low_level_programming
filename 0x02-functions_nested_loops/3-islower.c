#include "main.h"

/**
* _islower -> check for lowercase character
* @c: checking for character
* Return: 1 or 0depending on the condition for lowecase
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
