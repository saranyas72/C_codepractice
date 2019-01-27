/* Arrays : a.	Write a function to insert 10 numbers into an array using scanf */

#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 numbers to insert in an array \n");
    
    for(i=0;i<10;i++)
          scanf("%d",&a[i]);
    
    printf(" The Numbers entered into array are : \n");
    
    for(i=0;i<10;i++)
         printf("\n a[%d] is : %d",i,a[i]);  
      getch();
}
