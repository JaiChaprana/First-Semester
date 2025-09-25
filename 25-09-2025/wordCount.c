#include <stdio.h>

int main() {
    char c[100];
    fgets(c, sizeof(c), stdin);
    printf("You just typed: ");
    int i;
    int charCount = 0, digCount = 0, spcCount = 0;
    for (i =0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
        if (c[i] >= 'a' && c[i] <= 'z' || c[i] >= 'A' && c[i] <= 'Z') {
            charCount++;
        } else if (c[i] >= '0' && c[i] <= '9') {
            digCount++;
        } else {
            spcCount++;
        }
    }

    printf("Total Characters are: %d\n", charCount );
    printf("Total Digits are: %d\n", digCount );
    printf("Total Special Characters are: %d\n", spcCount - 1 );

    printf("Total number of characters are: %d", i-1);
}
