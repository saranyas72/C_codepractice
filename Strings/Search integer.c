/* Arrays : a.	Write a function to search an array for integer */

#include<stdio.h>
int main()
{
    int i,num;
    int a[10] = {5,4,6,20,100,5,100,9,6,2};
    printf(" The Numbers entered into array are : \n");
    for(i=0;i<10;i++)
         printf("%d ",a[i]);  
     
      printf(" \n Enter a number in array to search");
      scanf("%d",&num);
      for(i=0;i<10;i++)
      {
                       if(a[i]==num)
                       {
                                printf("Number found at position %d\n",i);  
                       }                                     
                                                                
      }
      getch();
}
