#include "main.h"

/**
* swap_int -> the functions is to swap int
* @a: pointer variable a
* @b: ponter variable b
* Return: always 0 (success)
*/

void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
