#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int searchByName(const struct Student* students, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;  
}

void deleteStudent(struct Student** students, int* size) {
    if (*size <= 0) {
        printf("Array is empty. No member to delete.\n");
        return;
    }
    int newSize = (*size) - 1;
    struct Student* newStudents = malloc(newSize * sizeof(struct Student));
    memcpy(newStudents, (*students) + 1, newSize * sizeof(struct Student));

    free(*students);
    *students = newStudents;
    *size = newSize;
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

    char searchName[20];
    printf("\nEnter the name to delete: ");
    scanf("%s", searchName);

    int index = searchByName(students, size, searchName);

    deleteStudent(&students, &size);
    printf("\nAll Students:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
    free(students);

    return 0;
}
