#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *target;
    char source_file[] = "x1.txt";
    char target_file[] = "x2.txt";
    char ch;

    // Open the source file for reading
    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Cannot open the source file.\n");
        exit(EXIT_FAILURE);
    }

    // Open the target file for writing
    target = fopen(target_file, "w");
    if (target == NULL) {
        printf("Cannot create the target file.\n");
        fclose(source);
        exit(EXIT_FAILURE);
    }

    // Copy the contents of the source file to the target file
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    // Close the source and target files
    fclose(source);
    fclose(target);

    return 0;
}