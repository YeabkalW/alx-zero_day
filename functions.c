#include <stdio.h>

/**
 *  Functions
 * 
 * are basically a set os statements that takes inputs perform some 
 * computation and produces output.
 * 
 *  syntax:
 *      return_type function_name(set_of_inputs);
 * 
 * Why Use Functions
 * 
 * 1. Reusability 
 * 
 *  once the function is defined, it can be reused over and over again.
 * 
 * 2. Abstraction
 * 
 * if you are just using the function in your program then you dont have to worry about how
 * it works inside,
 * 
 * Example : scanf function
 */


/* defining a function that calculates the area of a rectangle */

int areaofrect(int h, int w)
{
    int area;
    area = h * w;
    return area;
}

int main(void)
{
    /* declares variables to rep height and width of rec */
    int a=54, b=10;
    /* calls function that calcultes area and assigns it to var */
    int area = areaofrect(a,b);
    /* Prints area */
    printf("%d\n", area);

    return 0;

}