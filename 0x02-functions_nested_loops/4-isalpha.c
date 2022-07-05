#include "main.h"

/**
*_isalpha -> to check for alphabetic character
* @c: printing all characters
* Return: 1 or 0 based on the condition given
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
