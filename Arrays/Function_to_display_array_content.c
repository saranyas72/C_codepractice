/* Arrays - b.	Write a function to display array Content. */

#include<stdio.h>
#include<math.h>
void display(int a[])
{
    int i;
    for(i=0;i<10;i++)
    {
         printf("\n a[%d] is : %d",i,a[i]);
    }
}

void display(int a[]); 

void main()
  {
    int a[10],i;
    for(i=0;i<10;i++) 
    {
     a[i]=i;
    }
       printf(" The Numbers entered into array are : \n");       
  display(a);
  getch();
}

    
