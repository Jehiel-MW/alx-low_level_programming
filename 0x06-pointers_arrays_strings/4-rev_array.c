#include "main.h"

/**
* reverse_array - this program will reverse the content of an array of integers
* @a: this represents array to reverse
* @n: this represents number of elements of the array
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
int aux, i;

n--;
for (i = 0; i <= n; i++)
{
aux = a[n];
a[n] = a[i];
a[i] = aux;
n--;
}
}
