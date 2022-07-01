#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -> assign a random number to the variable n each time it is executed
* Return: always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is ", n);
if (n > 5)
{
printf("greter than 5");
}
{
if (n == 0)
printf("0");
}
if (n < 5 && n != 0)
{
printf("less than 5 not 0");
}
printf("\n");

return (0);
}
