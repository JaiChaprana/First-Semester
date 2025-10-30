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
    int dc=0;
    int arr2[100];
    int count2=0;
    for (int i = 0; i < count; i++) {
        int temp = arr[i];
        dc=0;
        for (int j=0; j<count; j++) {
            if (temp == arr[j]) {
                dc++;
            }
        }
        if (dc > 1) {
            printf("Duplicate number: %d\n", temp);
            arr2[count2]=temp;
            count2++;
        }
    }

    for (int i =0; i < count2; i++) {
        printf("%d ", arr2[i]);
    }

}