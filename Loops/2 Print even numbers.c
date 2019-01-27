/* Loops - b.	Display even numbers from 2 to 50
 
Program to print even numbers upto 50 */

#include<stdio.h>
int main()
{
    int i;
    printf("\n\t Program to print Even Numbers from 2 to 50");
    printf("\n\t ****************************************** \n\n");
    for (i=2;i<=50;i=i+2)
    {
        printf("%d",i);   
        printf("\n");
        }
        getch();
}
