// Number of execution of program

#include <stdio.h>

int main() {
    FILE *fp =  fopen("test.txt", "r");
    int numEx;
    if (fp == NULL) {
        printf("This is execution one.");
        fclose(fp);
        fp = fopen("test.txt", "w");
        numEx = 2;
        fprintf(fp, "%d", numEx);
        fclose(fp);
        return 0;
    }
    fscanf(fp, "%d", &numEx);
    printf("This is execution number: %d", numEx);
    numEx++;
    fclose(fp);
    fp = fopen("test.txt", "w");
    fprintf(fp, "%d", numEx);
    fclose(fp);
    return 0;
}