#include <stdio.h>

int main() {
    FILE *fp = fopen("source.txt", "r");
    FILE *fp2 = fopen("dest.txt","w");
    char data[100];

    if (fp == NULL || fp2== NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (fgets(data, sizeof(data),fp)) {
        fputs(data, fp2);
    }

    fclose(fp);
    fclose(fp2);

    printf("Content copied from source.txt to dest.txt.\n");
    return 0;
}
