#include<stdio.h>
int main()
{
   int Grade;

   printf("Enter Grade( 0-100 ): ");
   scanf("%d", &Grade);

   switch( Grade )
   {

   case 100:
   case 90:
     printf("Grade A");
     break;

   case 89:
   case 75:
     printf("Grade B");
     break;
   case 74:
   case 60:
     printf("Grade C");
     break;

   case 59:
   case 50:
     printf("Grade: D");
     break;

   case 49:
   case 36:
     printf("Grade: E");
     break;

   default:
     printf("Grade: F");
     break;

   }

   return 0;
}