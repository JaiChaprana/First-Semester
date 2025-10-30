#include <stdio.h>

int main() {
    int arr[10];

    for (int i =0; i <10; i++) {
        printf("Enter a number: \t");
        scanf("%d", &arr[i]);
    }

    int end = sizeof(arr)/sizeof(arr[0]) -1;
    for (int i = 0; i <end; i++) {
        int temp = arr[i];
        for (int j = 0; j < end; j++) {
            if (arr[j]> arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is: \n");
    for (int i =0; i < end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int count = 0;
    for (int i = 0; i < end; i++) {

        for (int j = i; j < end/2; j++) {
            if (arr[j]==arr[j+1]) {
                count++;
            } else {
                count = 0;
            }
        }
        if (count >= 5) {
            printf("Number which appeared more than or 5 times is: %d", arr[i]);
            break;
        }
    }
}