#include <stdio.h>
int setBit(n,k){
    return(n|1<<(k-1));
}
int clearBit(n,k){
    return(n&(~(1<<(k-1))));
}
int toggleBit(n,k){
    return(n^1<<(k-1));
}


int main() {
    int n,k;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter Kth bit: ");
    scanf("%d",&k);
    printf("%d\n",setBit(n,k));
    printf("%d\n",clearBit(n,k));
    printf("%d\n",toggleBit(n,k));


    return 0;
}