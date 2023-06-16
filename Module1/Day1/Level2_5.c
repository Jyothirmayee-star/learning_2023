int findCharacterType(char ch) {
    if (isalpha(ch)) {
        if (isupper(ch)) {
            return 1;  // Uppercase letter
        } else {
            return 2;  // Lowercase letter
        }
    } else if (isdigit(ch)) {
        return 3;  // Digit
    } else if (isprint(ch)) {
        return 4;  // Printable symbol
    } else {
        return 5;  // Non-printable symbol
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int type = findCharacterType(ch);
    printf("Type of character: %d\n", type);
    return 0;
}