#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *description: print the last digit of the number stored in the variable
 *return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
if (n > 5)
{
printf("%s and is greater than 5\n", n);
}
else if (n == 0)
{
printf("%s and is 0\n", n);
}
else (n < 6 != 0)
{
prinf("%s and is less than 6 and not 0\n", n);
}
return (0);
}
