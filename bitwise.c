#include <stdio.h>
/**
 * main - shows the difference b/n bitwise and logical operators
 * return - always 0.
 * 
 * 
 */

int main (void)
{
    char x = 1, y = 2;

    if (x&y)
    {
        printf("Result of x&y is 1");
    } 
    if (x&&y)
    {
        printf("Result of x&&y is 1\n");
    }

    return 0;
}
