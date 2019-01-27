// String  a.	Program to half your name into two and reverse it eg RAKESH will become KARHSE. 

#include<stdio.h>
#include<string.h>

void reverse(char s[]);
int main()
{
    char str[50];
    printf(" Enter a string to divide hald and print in reverse order \n");
    gets(str);
    reverse(str);
  getch();
}

void reverse(char str[])
{
    char rev[50];
    int i,j,len,mid;
           len=strlen(str);

                if(len%2==0)
                {
                mid=len/2; 
                }
                else 
                {
                mid=(len/2)+1;
                }  
      i = mid-1;
      for(j=0;j<mid;j++)
      {
         rev[j]=str[i];
             i--;
      }       
                                           
      i=len-1;                 
         for(j=mid;j<len;j++)
         {
          rev[j]=str[i];
          i--;
          }
 printf("\n Entered string is : %s \n Reversed String is %s", str,rev);               
}                   
