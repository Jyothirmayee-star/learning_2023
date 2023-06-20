#include <stdio.h>

struct student {
    char Name[50];
    int rollno;
    float Marks;
} s[5];

int main() {
    int i, n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter information of students:\n");
    for (i = 0; i < n; ++i) {
        s[i].rollno = i + 1;
        printf("\nFor roll number %d:\n", s[i].rollno);
        printf("Enter first name: ");
        scanf("%s", s[i].Name);
        printf("Enter marks: ");
        scanf("%f", &s[i].Marks);
    }
    printf("\nDisplaying Information:\n\n");
    for (i = 0; i < n; ++i) {
        printf("Roll number: %d\n", i + 1);
        printf("First name: %s\n", s[i].Name);
        printf("Marks: %.1f\n", s[i].Marks);
        printf("\n");
    }
    return 0;
}
