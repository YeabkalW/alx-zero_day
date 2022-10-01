#include <stdio.h>

/**
 * main - shows how conditional operators work (?  :  ;)
 * and also a home work assignment
 * 
 * return is always zero. 
 */

int main (void)
{
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;

    printf("%d\n", num);
    return 0;
}