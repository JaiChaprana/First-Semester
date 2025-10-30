#include <stdio.h>

int main() {
    const FILE *fp = fopen("emptyOrNot.txt", "r");
    if (fp == NULL) {
        printf("File doesn't exists");
        return 0;
    }
    if (fgetc(fp) == EOF) {
        printf("Empty file!!");
        fclose(fp);
        return 0;
    }
    printf("Not an empty file!");
    fclose(fp);
    return 1;
}