#include <stdio.h>
int main ()
{
    int num1, num2, max;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    
    if(num1 == num2)
        printf("Both are equal");
    else{
        max = num1 > num2? num1 : num2;
        printf("%d is greatest",max);
    }

  return 0;
}