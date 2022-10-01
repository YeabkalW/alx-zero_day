#include <stdio.h>

/**
 * main - prints a 3 x 4 matrix
 * 
 * return: is always 0.
 * 
 */

int main (void)
{
    int j, i;
    for (i=1 ; i<=3 ; i++)
    {
        for(j=1 ; j<= 4 ; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    /* initializes row, column, space, & no of rows*/ 
    int r, c, n, s;

    printf("please insert the number of rows: ");
    scanf("%d", &n);
    
    for(i=1 ; i<=n ; i++)
    {
        for(s=1 ; s<=n-i ; s++)
        {
            printf(" ");
        }

        for(j=1 ; j<=2*i-1 ; j++)
        {
            printf("#");
        }

        printf("\n");
        
    }

    return 0;
}