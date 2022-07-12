#include "main.h"
#include <stdio.h>

/**
* print_array -> the program is to print numbers of array
* @a: represents the array to print
* @n: represents the number of elements in the array
* Return: always 0 (success)
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == (n - 1))
printf("%d", *(a + i));
else
printf("%d, ", *(a + i));
}
printf("\n");
}
