#include <stdio.h>

int main() {
    int arr[100];
    int userYno, count =0;

    do {
        printf("Enter 0 to stop: ");
        scanf("%d",&userYno);
        if (userYno==0) {
            break;
        }
        printf("Enter a value: ");
        scanf("%d",&arr[count]);
        count++;
    }
    while (1);


    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
}