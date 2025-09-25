#include <stdio.h>

int main() {
    int mat[3][3];
    int columnSum[3] = {0,0,0};
    int rowSum[3] = {0,0,0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the value for row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nEntered matrix is: \n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
            columnSum[j] += mat[i][j];
            rowSum[i] += mat[i][j];
        }
        printf("\n");
    }

    printf("\nSum of rows is: \n");
    for (int i = 0; i < 3; i++) {
        printf("Sum of row %d is %d!!\n", i + 1, rowSum[i]);
    }

    printf("\nSum of columns is: \n");
    for (int i = 0; i < 3; i++) {
        printf("Sum of column %d is %d!!\n", i + 1, columnSum[i]);
    }
}
