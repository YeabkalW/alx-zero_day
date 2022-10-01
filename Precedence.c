#include <stdio.h>

/**
 * precedence of operators come into picture when in an expression
 * we need to decide which operator will be evaluated first. Operator with 
 * higher precedence will be evaluated first.
 * 
 * associativity of operators come into picture when precedence of operators are 
 * same and we need to decide which operator will be evaluated first.
 * 
 * associativity can be left to right or right to left
 * eg 
 * 10 / 2 * 5
 * left to right (10/2) * 5 = 25 correct associativity is from left to right.
 * right to left 10/ (2 * 5) = 1 incorrect 
 * 
 * Important Facts 
 * 
 * associativity can only help if there are two ot more operators of the same precedence
 * and not when there is just one operator
 * 
 * operators with the same precedence have the same associativity.
 * 
 */

int main (void)
{
    /**
     * Home Work
     * 
     * what is the out put of the following c program fragment?
     * 
     */

    int a = 10 , b = 20, c = 30, d = 40;
    
    if (a <= b == d >= c)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}