#include <stdio.h>

int main() {
    int num,i,min,max;
    printf("Enter number of elememts:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<num;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }

    }
    printf("\nThe Minimum element  of the array is : %d", min);
    printf("\nThe Maximum element of the array is : %d", max);
    return 0;
}