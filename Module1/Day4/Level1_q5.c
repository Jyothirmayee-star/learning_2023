#include <stdio.h>

int main() {
    int num,i,sum1=0,sum2=0,diff=0;
    printf("Enter number of elememts:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int length = sizeof(arr)/sizeof(arr[0]);    
    printf("Elements at Even position in the array are: \n");
   for(int i=1; i<length;i=i+2){
       printf("%d ", arr[i]);
       sum1+=arr[i];
   }
   printf("\nSum of Even position elements:%d",sum1);

   printf("\nElements at odd position in the array are: \n");
   for(int i=0; i<num; i=i+2){
        printf("%d ", arr[i]);
        sum2+=arr[i];
   }
   printf("\nSum of Odd position elements:%d",sum2);

   diff=sum1-sum2;
   printf("\nDifference between Even and Odd position elements:%d",diff);

    return 0;
}