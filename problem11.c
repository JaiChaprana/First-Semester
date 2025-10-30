#include <limits.h>
#include <stdio.h>

int main() {
    int arr[100];
    int userYno=1;
    int count = 0;
    int min_difference = INT_MAX;

    while (userYno != 0) {
        printf("Enter a number: \t");
        scanf("%d", &arr[count]);

        count++;

        printf("Do you wish to continue?? ");
        scanf("%d", &userYno);
    }

    int minIndex =0, min2Index=0;
    for (int i = 0; i < count; i++) {
        for (int j=0; j<count; j++) {
            if (arr[i]>arr[j]) {
                if (arr[i]-arr[j] < min_difference) {
                    min_difference = arr[i]-arr[j];
                    minIndex = i;
                    min2Index = j;
                }
            } else if (arr[j] > arr[i]) {
                if (arr[j]-arr[i] < min_difference) {
                    min_difference = arr[j]-arr[i];
                    minIndex = i;
                    min2Index = j;
                }
            } else {
                minIndex = i;
                min2Index = j;
                break;
            }
        }
    }

    printf("The indices where the difference is closest to zero are: %d and %d", minIndex, min2Index);
}