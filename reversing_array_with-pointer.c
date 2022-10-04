#include <stdio.h>

/**
 * 
 *  Main - reverse a series of numbers(arrays) using pointers
 * 
 */

#define N 5

int main (void)
{
    int a[N], *p;
    printf("enter %d elements in the array: ", N);
    for(p=a; p<= a+4; p++)
    {
        scanf("%d", p);
    }

    printf("elements in reverse order:\n");
    for(p=a+4; p>=a; p--)
    {
        printf("%d,\n", *p);
    }

    return 0;
}