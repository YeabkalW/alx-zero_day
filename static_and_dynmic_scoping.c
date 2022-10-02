#include <stdio.h> 

/**
 *  Static and Dynamic Scope of a Function
 * 
 *  Preliminaries
 * 
 *  1. We need to understand the memory layout in c
 * 
 *  we will focus on the stack layer on the memory lay out 
 * 
 *  Stack: 
 *  
 *  is a container (or memory segment) which holds some data
 *  data is retrievd in Last in First Out (LIFO) fashion.
 *  we perform two operation on stack layer of memory 
 *  push : to insert a layer of information
 *  Pop : to retrieve info
 * 
 *  when data is function is stored is stack(call to stack) its not the function
 *  that will be stored its the activation record.
 * 
 *  activation record : is a portion of stack which is generally composed of 
 *      1. Local variables of the function
 *      2. Return address to the caller
 *      3. Parameters of the function
 * 
 * 
 * 
 *  
 * 
 *  
 * 
 */