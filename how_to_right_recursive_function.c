#include <stdio.h>

/**
 * How to write recursive function
 * 
 * 1. divide the problem into smaller sub-problems.
 * 
 * 2. specify the base condition to stop the recursion.
 * 
 * Basic structure of any recursive fuction
 * 
 * return_type name_of_function(parameter/arguments)
 * {
 *      if( )
 *      {
 *          ...      here you write the base case of the function. 2
 *                   base condition is the one which doesnot require to call 
 *                   the same function again and it helps in stopping the 
 *                   recursion.
 *      }
 *      else
 *      {
 *          ...      here you write the recursive procedure. 1
 *      }
 * }
 * 
 *  function FACT calculates the factorial of any number
 */

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else 
    {
        return n * fact(n-1);
    }
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of your number is %d\n", fact(n));
    printf("\n");
}