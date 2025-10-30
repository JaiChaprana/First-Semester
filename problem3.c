#include <limits.h>
#include <stdio.h>

int main() {
    int arr[100];
    int userYno=1, count =0,num;

    while (userYno != 0) {
        printf("Input a number: ");
        scanf("%d", &num);
        arr[count] = num;
        count++;
        printf("Enter 0 to quit!!");
        scanf("%d", &userYno);
    }

    int max = INT_MIN;
    for (int i = 0; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum number is %d\n", max);

    int min = INT_MAX;
    for (int i = 0; i < count; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum number is %d\n", min);
}