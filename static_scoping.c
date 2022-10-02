#include <stdio.h>

/**
 * What is static scoping?
 * 
 * In Static scoping (lexical scoping), definition of a variable is resolved by
 * searching its containing block or function. if that fails, then searching the 
 * outer containing block and so on.
 * 
 * example
 * 
 * int a = 10, b = 20;
 * int fun()
 * {
 *      int a = 5;
 *      {
 *          int c;
 *          c = b/a;
 *          printf("%d", c);
 *      }
 * }
 * 
 *the out put is 4 because by default C uses the static scoping and is going to chose  
 * 
 */