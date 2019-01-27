/* Loops - d.	Create a square box with asterix only on the perimeter */

#include<stdio.h>
int main()
{
    int i,j;
    printf("\t This is 10*10 matrix with asterix only on perimeter \n \n");
    
    for (i=1;i<=10;i++)
    {
        
        for (j=1;j<=10;j++)
        {
            if (i==1 || j ==1 || i==10 || j==10)
            printf("*");                                                   
               else
               printf(" ");
        }
        printf("\n");
    }
    getch();
}
