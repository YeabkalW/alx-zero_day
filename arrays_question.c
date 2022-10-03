#include <stdio.h>

/**
 * question:
 *      write a program to print the following numbers in reverse order
 * 
 *      34 56 54 32  67 89 90 32 21
 *      
 *      assume all numbers are stored in an array.
 * 
 * 
 */

int main(void)
{
    int a[]={34,56,54,32,67,89,90,32,21}, i;
    
    for(i=8; i>=0; i--)
    {
        printf("%d,", a[i]);
    }

    printf("\n");
    
    for(i=0; i<9; i++)
    {
        printf("%d,", a[i]);
    }

    printf("\n");
    return 0; 
}