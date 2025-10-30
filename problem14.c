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

    int max_sum = arr[7]+arr[8]+arr[9];

    printf("The maximum sum of the array is: \t%d\n", max_sum);
}
