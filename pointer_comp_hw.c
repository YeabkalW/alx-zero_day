#include <stdio.h>

/**
 *      Home Work
 * 
 * what is the output of the following program?
 * 
 */

int main (void)
{
    int a[] = {5,16,7,89,45,32,23,10};
    int *p = &a[1], *q = &a[5];

    printf("%d ", *(p+3));
    printf("%d ", *(q-3));
    printf("%lu ", p-q);
    printf("%d ", p<q);
    printf("%d ", *p<*q);

    return 0;
}