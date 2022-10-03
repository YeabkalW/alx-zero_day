#include <stdio.h>

/**
 * designated initialization of arrays 
 * 
 * suppose we want to initialize an array like this:
 *  
 *  int a[10] = {1,0,0,0,0,5,3,0,0,0};
 *  how do i write this with out having to write the zero's explicitly;
 * 
 *  solution:
 *  
 * a[10]= {[0]=1, [5]=5, [6]=3}; this way of initialization id called designated initialization
 *                               number in square bracket are called designator
 * 
 */