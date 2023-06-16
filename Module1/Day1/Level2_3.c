#include<stdio.h>
int main() {
    char ch;
    printf("Enter a Character: ");
    scanf(" %c", &ch);
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
                || ch == 'i' || ch == 'I' || ch == 'o'
                || ch == 'O' || ch == 'u' || ch == 'U')
    {   
        printf("1");
    }
    else if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("0");
    }
    else
    {
        printf("Invalid Input : Please enter a Valid alphabet \n");
    }
    return 0;
}