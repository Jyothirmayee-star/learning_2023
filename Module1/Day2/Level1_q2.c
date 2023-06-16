#include <stdio.h>
#include <string.h>
void swap_func(void *a, void *b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int num1,num2;
    printf("Enter input values:");
    scanf("%d %d",&num1,&num2);
    printf("Inetegrs before swapping : %d %d\n",num1,num2);
    swap_func(&num1,&num2,sizeof(int));
    printf("Inetegrs after swapping : %d %d\n",num1,num2);
    float a,b;
    printf("Enter input values:");
    scanf("%f %f",&a,&b);
    printf("Floating numbers before swapping : %f %f\n",a,b);
    swap_func(&a,&b,sizeof(float));
    printf("Floating numbers after swapping : %f %f\n",a,b);
    char chr1,chr2;
    printf("Enter input values:");
    scanf(" %c  %c",&chr1,&chr2);
    printf("Characters before swapping : %c %c\n",chr1,chr2);
    swap_func(&chr1,&chr2,sizeof(char));
    printf("Characters after swapping : %c %c\n",chr1,chr2);
    return 0;
}