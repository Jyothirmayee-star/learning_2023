#include <stdio.h>
int main ()
{
    int Grade;
    printf("Enter your Grade:");
    scanf("%d",&Grade);
    if(Grade<0 || Grade>100)
    printf("Wrong Entry");
    else if (Grade>=90 && Grade<=100)
    printf("Grade A");
    else if(Grade>=75 && Grade<=89)
    printf("Grade B");
    else if(Grade>=60 && Grade<=74)
    printf("Grade C");
    else if(Grade>=50 && Grade<=59)
    printf("Grade D");
    else if(Grade<=49)
    printf("Grade F");
  return 0;
}