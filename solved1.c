#include <stdio.h>

/**
 * c standard is the language specification which is adopted by all C compilers 
 * across the globe.
 * 
 * According to C99 Standard :
 * 
 * The size of operator yields the size (in bytes) of its operand, which may be an expression
 * or a parenthesized name of a type. The size is determined from the type of the operand, If the
 * type of the operand is a variable length array type, then the operand is evaluated ; otherwise,
 * the operand is not evaluated and the operand and the result is an integer constant. 
 * 
 */

int main(void)
{
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;

    printf("%d %d %d %d\n", d, c, b, a);
    return 0;
}
