#include <stdio.h>
#define Max(a,b) (a>b?a:b)
#define Min(a,b) (a>b?b:a)

void findLargestSmallest(int num)
{
    int largestDigit = 0;
    int smallestDigit = 9;
    int digit;
    while(num)
    {
        digit = num%10;
        // Finding the largest digit
        largestDigit = Max(digit, largestDigit);

        // Find the smallest digit
        smallestDigit = Min(digit, smallestDigit);
        num = num/10;
    }
    printf("Largest Digit: %d \n", largestDigit);
    printf("Smallest Digit: %d \n", smallestDigit);
}

// Driver Code
int main()
{
    int n;
    printf("Enter no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0&&arr[i]<10){
            printf("num= %d\n",arr[i]);
            printf("Not valid\n");
        }
        else{
            printf("num= %d\n",arr[i]);
            findLargestSmallest(arr[i]);
        }
    }
}
