#include <stdio.h>

/**
 * Functions (solved question 1)
 * 
 * And home work problem.
 * 
 */

/**int func(int num)
{
    int count = 0;

    while(num)
    {
        count++;
        num >>= 1;
    } 

    return count;
}

int main(void)
{
    
    int function = func(435);
    printf("%d\n", function);
} 
*/

/* Home Work */

int func(int num)
{
    int count = 2;
    while(num)
    {
        count++;
        num >>= 2;
        
    }

    return count;
}

int main(void)
{
    int answer;

    answer = func(435);

    printf("%d\n", answer);
} 