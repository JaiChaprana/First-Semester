#include <limits.h>
#include <stdio.h>

int main() {
    int arr[100];
    int max = INT_MIN;
    int min = INT_MAX;
    int userYno=1;
    int count = 0;

    while (userYno != 0) {
        printf("Enter a number: \t");
        scanf("%d", &arr[count]);

        count++;

        printf("Do you wish to continue?? ");
        scanf("%d", &userYno);
    }

    for (int i = 0; i < count; i++) {
        if (arr[i]> max) {
            max = arr[i];
        }
    }
    printf("Maximum number is %d\n", max);

    for (int i = 0; i < count; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum number is %d\n", min);

    printf("Maximum difference in the array is: %d", max-min);
}