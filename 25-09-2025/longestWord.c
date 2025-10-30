#include <limits.h>
#include <stdio.h>
#include <string.h>

int main() {
    char c[100],word[100], lw[100];
    printf("Enter a string: ");
    fgets(c, sizeof(c), stdin);

    int count = 0;

    for (int i = 0; c[i] != '\0'; i++) {
       if (c[i] == ' ') {
           word[count] = c[i];
           count++;
       } else {
            word[count] = '\0';
           if (strlen(word) > strlen(lw)) {
               strcpy(word, lw);
           }
           count = 0;
       }
    }

    printf("Longest word is: %s",lw);
}
