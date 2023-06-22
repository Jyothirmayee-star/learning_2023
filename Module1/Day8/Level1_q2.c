#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(const char *source_file, const char *target_file, char option);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments. Usage: ./cp [option] <source_file> <target_file>\n");
        return 1;
    }

    char option = 'n'; // Default option (normal copy)
    if (argc >= 4) {
        option = argv[1][1]; // Get the option provided by the user
    }

    const char *source_file = argv[argc - 2];
    const char *target_file = argv[argc - 1];

    copyFile(source_file, target_file, option);

    return 0;
}

void copyFile(const char *source_file, const char *target_file, char option) {
    FILE *source, *target;
    char ch;

    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Cannot open the source file.\n");
        exit(EXIT_FAILURE);
    }

    target = fopen(target_file, "w");
    if (target == NULL) {
        printf("Cannot create the target file.\n");
        fclose(source);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(source)) != EOF) {
        switch (option) {
            case 'u': // Convert to uppercase
                ch = toupper(ch);
                break;
            case 'l': // Convert to lowercase
                ch = tolower(ch);
                break;
            case 's': // Convert to sentence case
                if (isalpha(ch)) {
                    static int sentence_start = 1;
                    if (sentence_start) {
                        ch = toupper(ch);
                        sentence_start = 0;
                    } else {
                        ch = tolower(ch);
                    }
                } else if (ch == '.' || ch == '?' || ch == '!') {
                    static int sentence_start = 1;
                    sentence_start = 1;
                }
                break;
        }
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);
}