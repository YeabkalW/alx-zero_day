#include <stdio.h>
/**
 * main - shows how left shift bitwise operator works <<
 * 
 * return: always 0
 *
 * left shifting is equivalent to right operand the times 2 
 * raised to the power of right operand  
 * 
 */

int main(void)
{
    char var = 3;

    printf("%d\n", var << 1);

    return 0;
}