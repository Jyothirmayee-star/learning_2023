#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[1000];  
    int x;
 
    printf("Enter  the string : ");
    gets(str);
    x = atoi(str);
    printf("Conversion of String in to Integer:%d",x);


    return 0;
}