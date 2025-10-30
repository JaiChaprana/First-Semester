#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    char content[1024];

    if (fp == NULL) {
        printf("File does not exist!");
        return 0;
    }

    // file read
    while (fgets(content, sizeof(content), fp) != NULL) {
        printf("%s", content);
    }

    // line by line
    while (fscanf(fp, "%s", content) == 1) {
        printf("%s\n", content);
    }


    // space count, charCount, wordCount
    int spaceCount = 0, charCount = 0, wordCount = 0, wordStart = 0;
    for (int i = 0; content[i]!= '\0'; i++) {
        if (content[i]==' ') {
            spaceCount++;
            wordStart = 0;
        } else if (content[i] == '\n' || content[i] == '\t') {
            wordStart = 0;
        }
        else {
            charCount++;
            if (wordStart == 0) {
                wordCount++;
                wordStart = 1;
            }
        }
    }

    // number addition
    int sum = 0, isNum = 0, num = 0;
    // for (int i = 0; content[i] != '\0'; i++) {
    //     if (content[i] >= 48 && content[i] <= 57) {
    //         num = num * 10 + (content[i] - 48);
    //         isNum = 1;
    //     } else {
    //         if (isNum == 1) {
    //             sum+=num;
    //             num = 0;
    //             isNum = 0;
    //         }
    //     }
    // }
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
    }

    printf("The sum of the number in the file is: %d", sum);


    // longest word
    int maxWlen = 0;
    char longestWord[100], currentWord[100];
    // for (int i = 0; content[i] != '\0'; i++) {
    //     if (content[i] !=' ' && content[i] !='\n' && content[i] != '\t') {
    //         currentWord[currentWlen] = content[i];
    //         currentWlen++;
    //     } else {
    //         if (currentWlen > 0) {
    //             currentWord[currentWlen]='\0';
    //             if (currentWlen > maxWlen) {
    //                 maxWlen = currentWlen;
    //                 strcpy(longestWord,currentWord);
    //             }
    //             currentWlen= 0;
    //         }
    //     }
    // }
    while (fscanf(fp, "%s", currentWord) == 1) {
        if (strlen(currentWord) > maxWlen) {
            maxWlen = strlen(currentWord);
            strcpy(longestWord, currentWord);
        }
    }
    printf("Longest word: %s\n", longestWord);
    fclose(fp);
    return 1;
}
