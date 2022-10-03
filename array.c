#include <stdio.h>

/**
 *       Arrays 
 * 
 *  Outline 
 * 
 * 1. Definition of array
 * 2. Understanding the definition of array 
 * 3. Introduction to one dimensional array
 * 
 * Definition: an array is a data structure containing a number of data values
 * (all of which are od same type)
 * 
 * Data structure is a format for organizing and storing data 
 * also, each data structure is designed to organize data to suit a specific purpose.
 * 
 * for example: array is a data structure which we can visualize as,
 * 
 * imagine an array as a large chunk of memory divided into smaller block of memory and 
 * each block id capable of storing a data value of some type.
 * 
 * the simplest form of array one can imagine is one dimensional array:
 * 
 * int a[1,2,3,4,5,6,7,8,9];
 * 
 *          Outline
 * 1. How to declare and define one dimensional array?
 * 2. How to access the array elements?
 * 3. How to initialize one dimensional array? 
 * 
 *  declaration of 1D array
 * 
 * syntax: data_type name_of_array[no of elements];
 * example: int a[10];  here the compiler will allocate a contiguous block of memory of size
 *          = 10*sizeof(int)
 * the length of an array can only be specifed using positive integer value.
 * 
 *      tips
 * 
 * specifying the length of an array using macro is considered th be an excellent practice
 * example:
 *      #define N 10
 *      int arr[N];
 * 
 *          Accessing array elements
 * 
 * to access an array element, just write 
 *          
 *              array_name[index]
 * to access the first element: a[0]
 * 
 *      BEST PRACTICE
 * specifying the length of an array using macro is considered to be an excellent practice.
 */

#define Y 15
/* using macro to set the length of an array so that in future time if i want to update the 
size of the array i would just update the macro rather than going and updating every array 
and function */
int main (void)
{
    int a[Y], i;
    for (i=0; i<Y; i++)
    {
        printf("Enter the input for index %d: \n", i);
        scanf("%d", &a[i]);
    }

    printf("\n Array Elements are as follows:\n");
    for(i=0; i<Y; i++)
    {
        printf("%d,\n", a[i]);
    }

    return 0; 
}