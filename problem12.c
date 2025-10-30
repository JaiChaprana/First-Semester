#include <stdio.h>

int main() {
    int arr[100];
    int arr2[100];
    int userYno=1;
    int count = 0;
    int count2 = 0;

    while (userYno != 0) {
        printf("Enter a number: \t");
        scanf("%d", &arr[count]);
        count++;
        printf("Enter a number for second array: \t");
        scanf("%d", &arr2[count2]);
        count2++;

        printf("Do you wish to continue?? ");
        scanf("%d", &userYno);
    }

    int checkCount = 0;
    if (count == count2) {
        for (int i = 0; i < count; i++) {
            if (arr[i] != arr2[i]) {
                checkCount++;
                printf("Arrays not equal!");
            }
        }
        if (checkCount == 0) {
            printf("Arrays are equal!");
        }
    } else {
        printf("Arrays are not equal!");
    }
}