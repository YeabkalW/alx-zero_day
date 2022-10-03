#include <stdio.h>

/**
 *                      POINTERS
 * 
 *  Pointer is a special variable that is capable of storing some address
 *  it points to a memory location where the first byte is stored 
 * 
 *                      How to declare pointer
 * 
 *  data_type *pointer_name;
 * 
 *                      How to initialize a pointer variable
 * 
 *  simple declaring a pointer is not enough
 *  it is important to initialize pointer before use.
 *  one way to initialize a pointer is to assign address of some variable.
 * 
 *  int x = 5;
 *  int *ptr;        this is equivalent to      int x = 5, *ptr = &x;
 *  ptr = &x;      & is knowns as the address
 *                 of operator.
 * 
 *  pointer points to the initial memory location of the object.
 * 
 *                      value of operator/"*"/
 * 
 * value of operator /indirection operator/ dereference operator is an operator that is
 * used to access the value stored at the location pointed by the pointer.
 * 
 *              pointer assignment 
 * 
 *  
 * 
 */

int main(void)
{
    int i = 1, *q;
    int *p = &i;
    q = p;
    *q = 5;
    printf("%d\n", *p);
}