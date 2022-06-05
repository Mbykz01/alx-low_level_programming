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
char Last digit of;
int n;
char is;
srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
if (n > 5)
{
printf("%s and is greater than 5\n", Last digit of);
}
else if (n == 0)
{
printf("%d and is 0\n", n);
}
else (n < 6 != 0)
{
prinf("%s and is less than 6 and not 0\n", is);
}
return (0);
}
