#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int rows, cols, bCols;

    printf("Enter the number of rows for array 1: \n");
    scanf("%d", &rows);
    printf("Enter the number of colums for array 1: \n");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter the element of row %d and column %d\n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of columns for array2: \n");
    scanf("%d", &bCols);

    for (int i =0; i < cols;i++) {
        for (int j = 0; j < bCols;j++) {
            printf("Enter the element of row %d and column %d\n", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows;i++) {
        for (int j = 0; j < bCols;j++) {
            c[i][j] = 0;
            for (int k = 0; k < cols;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < rows;i++) {
        for (int j = 0; j < bCols;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}