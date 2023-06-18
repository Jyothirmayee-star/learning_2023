#include <stdio.h>

int main() {
    int num,i,sum=0;
    printf("Enter number of elememts:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("\nThe sum of the array is : %d", sum);
    printf("\nThe average of the array is : %0.2f", (float)sum / num);
    return 0;
}