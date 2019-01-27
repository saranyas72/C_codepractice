/*  Loops   - c.	Create a square box 10 by 10 filled with asterix; 

Program to print star in 10 * 10 matrix as a square */

#include<stdio.h>
int main()
{
    int i,j;
    
    printf("\t This is a 10 * 10 Matrix filled with stars like a square \n\n");
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
        printf("* ");   
        }
        printf("\n");
        }
        getch();
}
