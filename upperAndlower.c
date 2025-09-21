#include <stdio.h>

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the element for row %d and column %d :\n");
            scanf("%d", &arr[i][j]);
        }
    }

    int upper_sum = 0, lower_sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i<=j) {
                upper_sum += arr[i][j];
            }
            if (i<=j) {
                lower_sum += arr[i][j];
            }
        }
    }

    printf("\n The sum of the upper triangle of matrix is %d !\n", upper_sum);
    printf("\n The sum of the lower triangle of matrix is %d !\n", lower_sum);
}