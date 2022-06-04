#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Prints "and that piece of art is useful.." without puts
 * program should return: 1
 */
int main(void)
{
char n[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

fprintf(stderr, "%s\n", n);

return (1);
}
