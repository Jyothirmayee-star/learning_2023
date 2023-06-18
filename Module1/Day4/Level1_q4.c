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
    printf("Even numbers in the array are: \n");
   for(int i=0; i<num; i++){
     if(arr[i]%2==0){
         printf("%d ", arr[i]);
         sum1+=arr[i];
     }
   }
   printf("\nSum of Even elements:%d",sum1);

   printf("\nOdd numbers in the array are: \n");
   for(int i=0; i<num; i++){
       if(arr[i]%2!=0){
            printf("%d ", arr[i]);
            sum2+=arr[i];
       }
   }
   printf("\nSum of Odd elements:%d",sum2);

   diff=sum1-sum2;
   printf("\nDifference between Even and Odd elements:%d",diff);

    return 0;
}