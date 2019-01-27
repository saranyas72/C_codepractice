#include<stdio.h>
#include<conio.h>
#include <windows.h>
int main()
{
int choice;
char choice1;
   printf("Which of the following C program do you want to call "
          "\n\t 1. Loop Programs"
          "\n\t 2. Array Programs"
          "\n\t 3. Function to binary search in an array for an integer."
          "\n\t 4. String Programs"
          "\n Enter your choice as 1 or 2 or 3 or 4 : \n ");
 scanf("%d",&choice);
switch(choice)
{
case 1:
     system("cls");
     printf("Your choice is 1 : Loop Programs \n");
     printf("\n Following programs are available in Loops : "
            "\n\ta. Print Numbers 1 to 50"
            "\n\tb. Print Even numbers from 1 to 50"
            "\n\tc. 10 * 10 square box filled with asterix"
            "\n\td. A square box with asterix only on the perimeter"
            "\n\te. A triangle with asterix starting with 1, then 3,5,7,9 which is centrally aligned like a pyramid"
            "\n\tf. Write a function to print Fibonacci Numbers. "
            "\n Enter your choice as a,b,c,d,e or f \n");
     choice1=getch();
     switch(choice1)
     {
       case 'a':
            system("cls");
            printf("\n You choice 'a' is to print numbers from 1 to 50");            
            system("D:\\Codes\\Loops\\1_Print_1_to_50.exe");
            break;
       case 'b':
            printf("\n You choice 'b' is to print even numbers from 1 to 50");
            system("D:\\Codes\\Loops\\2_Print_even_numbers.exe");
       case 'c':
            printf("\n You choice 'c' is to print square box 10*10 filled with asterix");
            system("D:\\Codes\\Loops\\3_10_by_10_Asterix_square.exe");
       case 'd':
            system("cls");
            printf("\n You choice 'd' is to print square box 10*10 with asterix only on perimeter");
            system("D:\\Codes\\Loops\\4_square_box_with_asterix_only_on_the_perimeter.exe");
       case 'e':
            system("cls");
            printf("\n You choice 'e' Print a triangle with asterix starting with 1, then 3,5,7,9, it is centrally alligned as Pyramid ");
            system("D:\\Codes\\Loops\\5_Pyramid");
       case 'f':
            system("cls");
            printf("\n You choice 'f' is to print Fibonacci Numbers ");
            system("D:\\Codes\\Loops\\6_Fibonacci_Numbers.exe");
       break;
       }
     break;
case 2: 
     system("cls");
     printf("Your choice is 2 : Array Programs\n");
     printf("\n Following programs are available in Arrays: "
            "\n\ta. Function to insert 10 numbers into an array using scanf."
            "\n\tb. Function to display array Content."
            "\n\tc. Function to populate array randomly"
            "\n\td. Function to search in an array for an integer"
            "\n\te. Remove duplicates in an array."
            "\n Enter your choice as a,b,c,d or e \n");
     choice1=getch();
     switch(choice1)
     {
     case 'a':
            system("cls");
            printf("\n You choice 'a' is to insert 10 numbers into an array using scanf and functions");            
            system("D:\\Codes\\Arrays\\1_insert_10_numbers_into_array.exe");
            break;
     case 'b':
            system("cls");
            printf("\n You choice 'b' is to display array Content using functions.");            
            system("D:\\Codes\\Arrays\\Function_to_display_array_content.exe");
            break;
     case 'c':
            system("cls");
            printf("\n You choice 'c' is to populate array randomly using functions");            
            system("D:\\Codes\\Arrays\\3_Random_Numbers.exe");
            break;
     case 'd':
            system("cls");
            printf("\n You choice 'd' is to search in an array for an integer");            
            system("D:\\Codes\\Arrays\\Function_to_search_in_an_array_for_an_integer.exe");
            break;
     case 'e':
            system("cls");
            printf("\n You choice 'e' is to remove duplicates in an array.");            
            system("D:\\Codes\\Arrays\\Remove_Duplicates.exe");
            break;
       }
     break;
case 3:
     system("cls");
     printf("Your choice is 3 : Function to binary search in an array for an integer.\n\n");
     system("D:\\Codes\\Arrays\\binary_search.exe");
     break;
case 4: 
     system("cls");
     printf("Your choice is 4 : String Programs\n");
     printf("\n Following programs are available for Strings: "
            "\n\ta. Program to half your name into two and reverse it eg RAKESH will become KARHSE"
            "\n\tb. Find the longest string in a given set of 3 strings."
            "\n\tc. Compare the two strings without using a built in function."
            "\n Enter your choice as a or b or c\n");
     choice1=getch();
     switch(choice1)
     {
     case 'a':
            system("cls");
            printf("\n You choice 'a' is to half your name into two and reverse it eg RAKESH will become KARHSE");            
            system("D:\\Codes\\Strings\\reverse_name.exe");
            break;
      case 'b':
            system("cls");
            printf("\n You choice 'b' is to find the longest string in a given set of 3 strings.");            
            system("D:\\Codes\\Strings\\Longest_of_3_strings.exe");
            break;
      case 'c':
            system("cls");
            printf("\n You choice 'c' is to Compare the two strings without using a built in function.");            
            system("D:\\Codes\\Strings\\String_Comparison_without_builtin_fn.exe");
            break;
      }
     break;       
    } 
   getch();
}
     
