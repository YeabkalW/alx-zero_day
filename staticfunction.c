#include <stdio.h>

/**
 *  Static Function 
 *  
 *  in C, Functions are global by default.
 * 
 *  This means if we want to access the function outside from the file 
 *  where it is declared, we can access it easily.
 * 
 *  Now if we want to restrict this access, then we make our function static
 *  by simply putting a keyword static in front of the function.
 * 
 *  Main - shows the importance of a static function using some example.
 *  return: always 0.(success) 
 *  
 *  Important Facts 
 * 
 *  static functions are restricted to the files where they are declared.
 *  reuse of the same function in another file is possible.
 */

int main (void)
{
    int a = 6, b = 2;
    int int_to = mult(a,b);
    printf("%d", int_to);
}