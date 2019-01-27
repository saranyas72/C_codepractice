/*  Loops   - e.	Make a triangle with asterix starting with 1, then 3,5,7,9 …… it should be centrally aligned like a pyramid */

#include<stdio.h>
int main()
{
 int row,end,i,j,space;
 printf("Enter number of rows: ");
 scanf("%d", &row);
 printf("\n");
 end=row;
 for(i=1; i<=row; i++)
 {
  for(space=1; space<=i; space++)
    printf(" ");
  for(j=1; j<=end; j++)
    printf("* ");
    end--;
  printf("\n"); 
 }
 getch();
}
