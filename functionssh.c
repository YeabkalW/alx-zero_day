#include <stdio.h>

/**
 *  Program that asks user for height and width 
 *  a rectangle then calculates the area or the 
 *  volume of the rectangle 
 * 
 *  Return: always zero.
 * 
 */

int area(int w, int h)
{
    int area;
    area = w * h;

    return area;
}

int volume(int w, int h, int l)
{
    int volume;

    volume =  w*h*l;

    return volume;
}

int main (void)
{
    int usr_in;
    printf("To calculate area press 1: \n To calculate Volume press 2: \n");
    scanf("%d", &usr_in);

    
    switch(usr_in==1)
    case 1:
        
        printf("Please Enter Height: \n");
        int h, w;
        scanf("%d", &h);
        printf("Please Enter Width: \n");
        scanf("%d", &w);

        int area = area(w,h);

        printf("Area = %d", area);
        break;
    case 2:
        int w, h, l;
        printf("Please Enter Height: \n");
        scanf("%d", &h);
        printf("Please Enter Width: \n");
        scanf("%d", &w);
        printf("Please Enter Length: \n");
        scanf("%d", &l);

        int volume = volume(w, h, l);

        printf("Volume = %d", volume);
        break;
    default:

        printf("Please Select Whether To Calculate Area or Volume"); 



    return 0;

    
}
