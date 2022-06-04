#include <stdio.h>
#include <time.h>

/**
 * positive_or_negative 
 *
 * Description: Positive anything is better than negative nothing
 */
int main(void)

{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("if the number is greater than 0: is positive\n");
}
else if (n == 0)
{
printf("if the number is 0: is zero\n");
}
else (n < 0)
{
printf("if the number is less than 0: is negative\n");
}
return (0);
}
