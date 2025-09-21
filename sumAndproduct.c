#include <stdio.h>

int main() {

    int rows,cols;

    printf("Enter the number of rows: \n");
    scanf("%d",&rows);
    printf("Enter the number of columns: \n");
    scanf("%d",&cols);

    int arr[rows][cols];

    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if (i+j == rows -1) {
                printf("Enter an element in row %d and column %d: ", i+1, j+1);
                scanf("%d",&arr[i][j]);
            } else {
                arr[i][j] = 0;
            }
        }
    }

    printf("The matrix is -> \n");
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int sum = 0, product=1;

    for(int i=0;i<rows;i++) {
        for (int j = 0; j <cols; j++) {
            if (i+j == rows -1) {
                sum += arr[i][j];
                product *= arr[i][j];
            }
        }
    }

    printf("The sum of anti-diagonal matrix is \n");
    printf("%d", sum);
    printf("\n");
    printf("The product of anti-diagonal matrix is \n");
    printf("%d", product);
}
