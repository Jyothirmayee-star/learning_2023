#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void swapStudents(struct Student* students, int index1, int index2) {
    struct Student temp = students[index1];
    students[index1] = students[index2];
    students[index2] = temp;
}

int main() {
    struct Student* students = NULL;
    int size = 0;  

    printf("Enter the number of students: ");
    scanf("%d", &size);
    students = malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

   
    int index1, index2;
    printf("\nEnter the indexes of the students to swap (starting from 0): ");
    scanf("%d %d", &index1, &index2);

    if (index1 >= 0 && index1 < size && index2 >= 0 && index2 < size) {
        swapStudents(students, index1, index2);
        printf("\nSwap successful.\n");
        printf("\nAll Students:\n");
        for (int i = 0; i < size; i++) {
            printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
        }
    } else {
        printf("\nInvalid indexes. Unable to swap.\n");
    }
    free(students);

    return 0;
}
