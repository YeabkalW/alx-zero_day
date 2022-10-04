#include <stdio.h>

/**
 *  pointer comparison 
 * 
 * use relational operators (<.>,<=,>=) and equality operators (==, !=) to 
 * compare pointers
 * 
 * only possible when both pointers point to same array. 
 * 
 * out put depends upon the relative positions of both the pointers.
 * 
 */

int main (void)
{
    int a[] = {1,2,3,4,5,6};
    int *p = &a[3];
    int *q = &a[5];
    printf("%d\n", p<=q);
    printf("%d\n", p>=q);
    q = &a[3];
    printf("%d\n", p==q);
    return 0;
}