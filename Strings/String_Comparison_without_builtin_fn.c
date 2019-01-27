// Compare 2 strings without built in function

#include<stdio.h>
int main()
{
    char s1[50],s2[50],s3[50];
           printf("\n Enter 2 Strings to compare without using built in function :\n \n");
    gets(s1);
    gets(s2);
   int i = 0;
 
   while( s1[i] == s2[i] )
   {
      if( s1[i] == '\0' || s2[i] == '\0' )
      break;
      i++;
   }
     if(s1[i] == '\0' && s2[i] == '\0')
      printf("\n ** Entered String %s and %s are equal **",s1,s2);
     else
     printf("\n ** Entered String %s and %s are not equal **",s1,s2); 
   getch();
}
