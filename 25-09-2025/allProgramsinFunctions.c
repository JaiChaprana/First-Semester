#include <stdio.h>
#include <string.h>

char countWord(char c[100]) {
    int i;
    int charCount = 0, digCount = 0, spcCount = 0, wordCount = 0;
    for (i =0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
        if (c[i] == ' ') {
            wordCount++;
        }
        if (c[i] >= 'a' && c[i] <= 'z' || c[i] >= 'A' && c[i] <= 'Z') {
            charCount++;
        } else if (c[i] >= '0' && c[i] <= '9') {
            digCount++;
        } else {
            spcCount++;
        }
    }

    printf("\nTotal Characters are: %d\n", charCount );
    printf("\nTotal Digits are: %d\n", digCount );
    printf("\nTotal Special Characters are: %d\n", spcCount - 1 );
    printf("\nTotal Words are: %d\n", wordCount + 1);
    printf("\nTotal number of characters are: %d", i-1);

    return '0';
}

char caseChange(char c[100]) {

    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] >= 'a' && c[i] <= 'z') {
            c[i] -= 32;
        } else if (c[i] >= 'A' && c[i] <= 'Z') {
            c[i] += 32;
        }
    }

    printf("\nNew sentence is: ");

    for (int i = 0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
    }
    return '0';
}

char palindrome(char c[100]) {
    int flag = 0;

    // Calculate the string length
    const int length = strlen(c);

    // Compare characters from the start and end of the string
    // and stop if a mismatch is found or the middle of the string is reached.
    for (int i = 0; i < length / 2; i++) {
        if (c[i] != c[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    // Output the result
    if (flag) {
        printf("\n%s is not a palindrome", c);
    } else {
        printf("%s is a palindrome\n", c);
    }
    return '0';
}

int main() {
    char c[100];

    printf("Enter a string: ");
    fgets(c, sizeof(c), stdin);
    printf("\nYou just typed: ");

    for (int i = 0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
    }
    printf("\n");

    countWord(c);
    caseChange(c);
    palindrome(c);
}
