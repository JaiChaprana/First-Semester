#include <stdio.h>

int main() {
    char c[100];
    fgets(c, sizeof(c) , stdin);
    printf("You just typed: ");

    for (int i = 0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
    }

    printf("\n");

    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] >= 'a' && c[i] <= 'z') {
            c[i] -= 32;
        } else if (c[i] >= 'A' && c[i] <= 'Z') {
            c[i] += 32;
        }
    }

    printf("New sentence is: ");

    for (int i = 0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
    }
}