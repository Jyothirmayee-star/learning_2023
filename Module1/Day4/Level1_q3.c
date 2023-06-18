#include <stdio.h>

int main() {
    int num,i,j=0;
    printf("Enter number of elememts:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements:");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int rev[num];
    for(i=num-1;i>=0;i--){
        rev[j]=arr[i];
        j++;
    }
    printf("The reverse array:");
    for(i=0;i<num;i++){
        printf("%d",rev[i]);
    }
    
    return 0;
}