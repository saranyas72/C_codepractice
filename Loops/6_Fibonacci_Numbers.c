/* Loops - f.	Write a function to print Fibonacci Numbers */

#include<stdio.h>
int main()
{
    int fib, t1,t2,n,count;
    t1=0;
    count=0;
    t2=1;
    printf("Enter Number of terms of fibonacci series to be displayed : \n");
    scanf("%d",&n);
    printf(" \n\t The Fibonacci Series are : \n\n");
    printf("%d\t%d\t",t1,t2);
    while (count<n-2)
    {
         fib=t1+t2;  
         t1=t2;
         t2=fib;
         printf("%d\t",fib);
         count++;
    }
         getch();
    }
