#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float physics,math,chemistry,total,percentage;   
    
} s;

int main() {
    printf("Enter Student information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter Physics Marks: ");
    scanf("%f", &s.physics);
    printf("Enter Maths Marks: ");
    scanf("%f", &s.math);
    printf("Enter Chemistry Marks: ");
    scanf("%f", &s.chemistry);

    s.total=s.physics+s.math+s.chemistry;
    s.percentage=s.total/3;

    printf("Displaying Student Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Physics Marks: %.1f\n", s.physics);
    printf(" Maths Marks: %.1f\n", s.math);
    printf(" Chemistry Marks: %.1f\n", s.chemistry);
    printf("Total Marks: %.1f\n", s.total);
    printf("Percentage: %.1f\n", s.percentage);

    return 0;
}