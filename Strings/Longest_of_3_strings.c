#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],s3[50];
    int a,b,c;
               printf("\n Enter 3 Strings to find the longest : \n");
    gets(s1);
    gets(s2);
    gets(s3);
    a=strlen(s1);
    b=strlen(s2);
    c=strlen(s3);
if (a > b && a > c) 
{
printf("%s is greater than %s and %s",s1,s2,s3); 
}
else if (b > a && b > c) 
{
printf("%s is greater than %s and %s",s2,s1,s3); 
}
else if (c > a && c > b) 
{
printf("%s is greater than %s and %s",s3,s1,s2); 
}
else if(a==b && a==c)
{
 printf("All 3 strings are equal");
}
else if(a==b)
{
     printf("%s and %s are equal in length and is the greatest.",s1,s2);
}
else if (b==c)
{
       printf("%s and %s are equal in length and is the greatest.",s2,s3);
}
else if (a==c)
{
     printf("%s and %s are equal in length and is the greatest.",s1,s3);
}
getch();
}
