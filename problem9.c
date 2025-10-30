#include <stdio.h>

int main() {
    int arr[100];
    int userYno=1;
    int count = 0;

    while (userYno != 0) {
        printf("Enter a number: \t");
        scanf("%d", &arr[count]);

        count++;

        printf("Do you wish to continue?? ");
        scanf("%d", &userYno);
    }

    int evenSum=0, oddSum=0;
    for (int i = 0; i < count; i++) {
        if (arr[i]%2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    printf("Sum of even Numbers is: %d \n", evenSum);
    printf("Sum of odd Numbers is: %d \n", oddSum);
}