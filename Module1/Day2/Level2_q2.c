#include <stdio.h>
int main() {
    int bcd,wt=1,decimal=0,rem;
    printf("Enter Binary Coded Number:");
    scanf("%d",&bcd);
    while(bcd!=0){
        rem=bcd%10;
        decimal=decimal+rem*wt;
        bcd=bcd/10;
        wt=wt*2;
    }
    printf("%d\n",decimal);
    return 0;
}