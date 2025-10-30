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
    for (int i = 0; i < count; i++) {
        int temp = arr[i];
        dc = 0;
        for (int j=0; j < count; j++) {
            if (temp == arr[j]) {
                dc++;
            }
        }
        if (dc<=1) {
            printf("Unique element: %d\n", temp);
        }
    }

}